#include "Cpoint.h"
#include <iostream>
#include "Vecteur3D.h"
#include "Cmatrice.h"
#include "Cvect.h"


using namespace std; 

int main()
{

	//Q81
	/*Cpoint a(6, 8);
	affiche(a);
	Cpoint* p1;
	p1 = new Cpoint(5, 2);
	affiche(*p1);
	delete p1;*/

	Cvect w(1, 2, 3);
	Cvect res;
	double tb[3][3] = {4, 5, 9, 7, 3, 7, 2, 1, 6};
	Cmatrice a = tb;
	res = prod(a, w);
	res.affiche();

	return 0;
}