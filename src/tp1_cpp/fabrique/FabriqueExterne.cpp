
#include "FabriqueExterne.hpp"

#include "tp1_cpp/fabrique_abs/IFabriqueAbstraite.hpp"

#include <memory>
#include <optional>
#include <sstream>
#include <string>

std::optional<std::unique_ptr<Vegetal>> FabriqueExterne::creerVegetal(
	const IFabriqueAbstraite& fabriqueAbstraite,
	const std::string& donnees)
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
			return fabriqueAbstraite.creerChampi(vitessePousse);
		}
		return nullptr;
	}
	return std::nullopt;
}
