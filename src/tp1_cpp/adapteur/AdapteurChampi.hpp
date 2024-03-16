
#pragma once

#include "tp1_cpp/Champignon.hpp"
#include "tp1_cpp/Vegetal.hpp"
#include <memory>
#include <string>

class AdapteurChampi : public Vegetal
{
	public:
		AdapteurChampi(std::unique_ptr<Champignon> vraiChampi);

		double getTaille() const override;

		void croissance() override;
		std::string getType() const override;

	private:
		std::unique_ptr<Champignon> mVraiChampi;
};
