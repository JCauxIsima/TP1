
#pragma once

class Vegetal
{
	public:
		virtual ~Vegetal() = default;

		double getTaille() const;

		virtual void croissance() = 0;

	protected:
		void setTaille(double taille);

	private:
		double mTaille = 0;
};
