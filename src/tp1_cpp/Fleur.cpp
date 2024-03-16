
#include "Fleur.hpp"

#include <algorithm>

Fleur::Fleur(double tailleMax)
	: mTailleMax(tailleMax)
{
}

void Fleur::croissance()
{
	setTaille(std::min(mTailleMax, getTaille() + 0.1));
}
