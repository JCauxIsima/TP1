
#include "FleurTropical.hpp"

FleurTropical::FleurTropical(double tailleMax): Fleur(tailleMax)
{
}

void FleurTropical::croissance()
{
	Fleur::croissance();
	Fleur::croissance();
}
