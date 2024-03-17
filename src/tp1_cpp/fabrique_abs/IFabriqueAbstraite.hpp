
#pragma once

#include "tp1_cpp/Vegetal.hpp"

#include <memory>

class IFabriqueAbstraite
{
public:
	virtual ~IFabriqueAbstraite() = default;

	virtual std::unique_ptr<Vegetal> creerArbre() const = 0;
	virtual std::unique_ptr<Vegetal> creerFleur(double tailleMax) const = 0;
	virtual std::unique_ptr<Vegetal> creerChampi(double vitessePousse) const = 0;
};
