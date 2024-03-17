
#pragma once

#include "tp1_cpp/Champignon.hpp"
#include "tp1_cpp/adapteur/AdapteurChampi.hpp"

#include <memory>

class AdapteurChampiTempere : public AdapteurChampi
{
public:
	AdapteurChampiTempere(std::unique_ptr<Champignon> vraiChampi);
};
