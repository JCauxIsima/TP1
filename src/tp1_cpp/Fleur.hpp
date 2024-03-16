
#pragma once

#include "Vegetal.hpp"

class Fleur : public Vegetal
{
	public:
		Fleur(double tailleMax);

		void croissance() override;

	private:
		double mTailleMax;
};
