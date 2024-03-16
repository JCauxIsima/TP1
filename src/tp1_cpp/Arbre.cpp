
#include "Arbre.hpp"

#include "strategie/ICroissance.hpp"

void Arbre::croissance()
{
	if (mStrategieCroissance)
	{
		setTaille(mStrategieCroissance->nouvelleTaille(getTaille()));
	}
	else
	{
		// Fallback par defaut
		setTaille(getTaille() + 1.);
	}
}

void Arbre::setStrategieCroissance(ICroissance* croissance)
{
	mStrategieCroissance = croissance;
}

