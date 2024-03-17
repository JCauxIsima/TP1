
#include "FabriqueBase.hpp"

#include "tp1_cpp/fabrique_abs/IFabriqueAbstraite.hpp"

#include <memory>
#include <optional>
#include <sstream>
#include <string>

class Vegetal;

std::optional<std::unique_ptr<Vegetal>>
FabriqueBase::creerVegetal(const IFabriqueAbstraite& fabriqueAbstraite, const std::string& donnees)
{
	std::istringstream iss(donnees);
	std::string type;
	iss >> type;
	if (type == "Arbre")
	{
		return fabriqueAbstraite.creerArbre();
	}
	else if (type == "Fleur")
	{
		double taille;
		iss >> taille;
		if (taille > 0)
		{
			return fabriqueAbstraite.creerFleur(taille);
		}
		return nullptr;
	}
	return std::nullopt;
}
