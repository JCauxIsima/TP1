
#pragma once

#include "IFabriqueAbstraite.hpp"

#include <memory>

class Vegetal;

class FabriqueAbstraiteTempere : public IFabriqueAbstraite
{
public:
	std::unique_ptr<Vegetal> creerArbre() const override;
	std::unique_ptr<Vegetal> creerFleur(double tailleMax) const override;
	std::unique_ptr<Vegetal> creerChampi(double vitessePousse) const override;
};
