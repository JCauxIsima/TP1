
#pragma once

#include "IFabrique.hpp"

#include <memory>
#include <optional>
#include <string>

class Vegetal;

class FabriqueExterne : public IFabrique
{
	public:
		std::optional<std::unique_ptr<Vegetal>>
		creerVegetal(const IFabriqueAbstraite& fabriqueAbstraite, const std::string& donnees);
};
