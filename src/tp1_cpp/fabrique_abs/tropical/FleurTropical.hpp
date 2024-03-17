
#pragma once

#include "tp1_cpp/Fleur.hpp"

class FleurTropical : public Fleur
{
public:
	FleurTropical(double tailleMax);

	void croissance() override;
};
