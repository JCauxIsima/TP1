
#include "ArbreTropical.hpp"

#include "tp1_cpp/Arbre.hpp"

void ArbreTropical::croissance()
{
	const auto savTaille = getTaille();
	Arbre::croissance();
	const auto diff = getTaille() - savTaille;
	setTaille(getTaille() + diff / 2.);
}
