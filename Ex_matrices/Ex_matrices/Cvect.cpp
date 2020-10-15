#include "Cvect.h"
#include "Cmatrice.h"
#include <iostream>
using namespace std;

void Cvect::affiche()
{
	int i;
	for (i = 0; i < 3; i++)
		cout << v[i] << endl;
}

Cvect prod(const Cmatrice& m, const Cvect& x)
{
	int	i;
	int j;
	double som;
	Cvect res;
	for (i = 0; i < 3; i++)
	{
		for (j=0, som=0; j<3; j++)
			som += m.m_dmatrice[i][j] * x.v[j];
		res.v[i] = som;
	}
	return res;
}

