#include "Cmatrice.h"
#include <iostream>
using namespace std;

Cmatrice::Cmatrice(double t[3][3])
{
	int i;
	int j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			m_dmatrice[i][j] = t[i][j];
}

