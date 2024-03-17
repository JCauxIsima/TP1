
#include "AdapteurChampiTropical.hpp"

#include "tp1_cpp/Champignon.hpp"
#include "tp1_cpp/adapteur/AdapteurChampi.hpp"

#include <memory>
#include <utility>

AdapteurChampiTropical::AdapteurChampiTropical(std::unique_ptr<Champignon> vraiChampi):
	AdapteurChampi(std::move(vraiChampi))
{
}

void AdapteurChampiTropical::croissance()
{
	AdapteurChampi::croissance();
	AdapteurChampi::croissance();
	AdapteurChampi::croissance();
}
