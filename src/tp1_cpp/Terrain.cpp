
#include "Terrain.hpp"

#include "tp1_cpp/Vegetal.hpp"
#include "tp1_cpp/strategie/IStratCroissance.hpp"

#include "tp1_cpp/fabrique/IFabrique.hpp"
#include "tp1_cpp/fabrique/FabriqueBase.hpp"
#include "tp1_cpp/fabrique/FabriqueExterne.hpp"

#include <algorithm>
#include <array>
#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <utility>

void Terrain::ajoutVegetal(std::unique_ptr<Vegetal> vegetal)
{
	mVegetals.emplace_back(std::move(vegetal));
}

void Terrain::croissance()
{
	std::for_each(mVegetals.begin(), mVegetals.end(),
			[](const std::unique_ptr<Vegetal>& vegetal)
			{
				vegetal->croissance();
			});
}

void Terrain::setStrategieCroissance(ICroissance* croissance)
{
	std::for_each(mVegetals.begin(), mVegetals.end(),
			[croissance](const std::unique_ptr<Vegetal>& vegetal)
			{
				if (auto* strategieCompatible = dynamic_cast<IStratCroissance*>(vegetal.get()))
				{
					strategieCompatible->setStrategieCroissance(croissance);
				}
			});
}

void Terrain::afficher()
{
	std::for_each(mVegetals.begin(), mVegetals.end(),
			[](const std::unique_ptr<Vegetal>& vegetal)
			{
				std::cout << "\n\tMon " << vegetal->getType() << " fait : " << vegetal->getTaille() << std::endl;
			});
}

void chargerFichier(Terrain& terrain, const std::string& path)
{
	const std::array<std::unique_ptr<IFabrique>, 2> fabriques = {
		std::make_unique<FabriqueBase>(),
		std::make_unique<FabriqueExterne>()};
	std::ifstream fichier(path);
	std::string ligne;
	while (std::getline(fichier, ligne))
	{
		bool trouve = false;
		for (const auto& fabrique : fabriques)
		{
			auto resFabrique = fabrique->creerVegetal(ligne);
			if (resFabrique.has_value())
			{
				terrain.ajoutVegetal(std::move(resFabrique.value()));
				trouve = true;
			}
		}
		if (!trouve)
		{
			std::cerr << "La ligne [" << ligne << "] n'a pu etre lu." << std::endl;
		}
	}
}
