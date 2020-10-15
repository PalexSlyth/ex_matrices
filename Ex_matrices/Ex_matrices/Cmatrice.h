#pragma once
#include "Cvect.h"

class Cvect;
class Cmatrice
{
	double	m_dmatrice[3][3];
public:
	Cmatrice();
	Cmatrice(double	t[3][3]);
	friend	Cvect prod(const Cmatrice&, const Cvect&);
};

