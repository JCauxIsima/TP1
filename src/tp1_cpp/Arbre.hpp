
#pragma once

#include "Vegetal.hpp"

class ICroissance;

class Arbre : public Vegetal
{
	public:
		void croissance() override;

		void setStrategieCroissance(ICroissance* croissance);

	private:
		ICroissance* mStrategieCroissance = nullptr;
};
