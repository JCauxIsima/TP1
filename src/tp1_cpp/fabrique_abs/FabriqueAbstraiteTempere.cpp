
#include "FabriqueAbstraiteTempere.hpp"

#include "tp1_cpp/Champignon.hpp"

#include "tempere/ArbreTempere.hpp"
#include "tempere/FleurTempere.hpp"
#include "tempere/AdapteurChampiTempere.hpp"

#include <memory>

std::unique_ptr<Vegetal> FabriqueAbstraiteTempere::creerArbre() const
{
	return std::make_unique<ArbreTempere>();
}

std::unique_ptr<Vegetal> FabriqueAbstraiteTempere::creerFleur(double tailleMax) const
{
	return std::make_unique<FleurTempere>(tailleMax);
}

std::unique_ptr<Vegetal> FabriqueAbstraiteTempere::creerChampi(double vitessePousse) const
{
	return std::make_unique<AdapteurChampiTempere>(std::make_unique<Champignon>(vitessePousse));
}
