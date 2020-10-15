#pragma once
#include "Cmatrice.h"

class Cmatrice;
class Cvect
{
private : 
	double v[3];
		public	:
	Cvect (double v1=0, double v2=0, double v3=0)
	{	
		v[0] = v1;	
		v[1] = v2;
		v[2] = v3;	
	}
	friend Cvect prod(const Cmatrice&, const Cvect&);
	void affiche();
};

