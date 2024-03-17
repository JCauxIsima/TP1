
#include "AdapteurChampiTempere.hpp"

#include "tp1_cpp/Champignon.hpp"
#include "tp1_cpp/adapteur/AdapteurChampi.hpp"

#include <memory>
#include <utility>

AdapteurChampiTempere::AdapteurChampiTempere(std::unique_ptr<Champignon> vraiChampi):
	AdapteurChampi(std::move(vraiChampi))
{
}
