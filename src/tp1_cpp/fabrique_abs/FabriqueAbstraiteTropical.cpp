
#include "FabriqueAbstraiteTropical.hpp"

#include "tp1_cpp/Champignon.hpp"

#include "tropical/ArbreTropical.hpp"
#include "tropical/FleurTropical.hpp"
#include "tropical/AdapteurChampiTropical.hpp"

#include <memory>

std::unique_ptr<Vegetal> FabriqueAbstraiteTropical::creerArbre() const
{
	return std::make_unique<ArbreTropical>();
}

std::unique_ptr<Vegetal> FabriqueAbstraiteTropical::creerFleur(double tailleMax) const
{
	return std::make_unique<FleurTropical>(tailleMax);
}

std::unique_ptr<Vegetal> FabriqueAbstraiteTropical::creerChampi(double vitessePousse) const
{
	return std::make_unique<AdapteurChampiTropical>(std::make_unique<Champignon>(vitessePousse));
}
