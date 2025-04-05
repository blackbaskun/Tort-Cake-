
#include <iostream>
#include "Tort1.h"
 
using namespace std;
 
int main()
{

	Tort nowy(1,"Magiczny");
	nowy.Add(malina);
	nowy.Add(jablko);
	nowy.Print();

	nowy.GetCount();


	Tort nowy2(5);
	nowy2.Print();
	nowy.GetCount();
	Tort *t = new Tort;
	Tort::GetCount();
	delete t;
	Tort::GetCount();
	
	return 0;
}


