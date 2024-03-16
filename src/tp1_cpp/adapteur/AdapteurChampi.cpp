
#include "AdapteurChampi.hpp"

#include "tp1_cpp/Champignon.hpp"

#include <memory>
#include <string>
#include <utility>

AdapteurChampi::AdapteurChampi(std::unique_ptr<Champignon> vraiChampi)
	: mVraiChampi(std::move(vraiChampi))
{
}

double AdapteurChampi::getTaille() const
{
	return mVraiChampi->getHauteurChampignon();
}

void AdapteurChampi::croissance()
{
	mVraiChampi->pousse(Champignon::Meteo::Soleil);
}

std::string AdapteurChampi::getType() const
{
	return "Champignon";
}
