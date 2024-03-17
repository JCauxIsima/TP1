
#pragma once

#include "tp1_cpp/Champignon.hpp"
#include "tp1_cpp/adapteur/AdapteurChampi.hpp"

#include <memory>

class AdapteurChampiTropical : public AdapteurChampi
{
public:
	AdapteurChampiTropical(std::unique_ptr<Champignon> vraiChampi);

	void croissance() override;
};
