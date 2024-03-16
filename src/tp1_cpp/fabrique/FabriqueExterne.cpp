
#include "FabriqueExterne.hpp"

#include "tp1_cpp/Champignon.hpp"
#include "tp1_cpp/adapteur/AdapteurChampi.hpp"

#include <memory>
#include <optional>
#include <sstream>
#include <string>

static std::unique_ptr<AdapteurChampi> creerChampi(double vitessePousse)
{
	return std::make_unique<AdapteurChampi>(std::make_unique<Champignon>(vitessePousse));
}

std::optional<std::unique_ptr<Vegetal>>
	FabriqueExterne::creerVegetal(const std::string& donnees)
{
	std::istringstream iss(donnees);
	std::string type;
	iss >> type;
	if (type == "Champignon")
	{
		double vitessePousse;
		iss >> vitessePousse;
		if (vitessePousse > 0)
		{
			return creerChampi(vitessePousse);
		}
		return nullptr;
	}
	return std::nullopt;
}
