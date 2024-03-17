
#pragma once

#include <memory>
#include <optional>
#include <string>

class IFabriqueAbstraite;
class Vegetal;

class IFabrique
{
	public:
		virtual ~IFabrique() = default;
		virtual std::optional<std::unique_ptr<Vegetal>>
		creerVegetal(const IFabriqueAbstraite& fabriqueAbstraite, const std::string& donnees) = 0;
};
