#include <iostream>
#include <iomanip>
#include <cmath>
//#include <list>
//#include <Windows.h>
//#include <process.h>
//#include <string>
#include "ue_8.h"

using namespace std;


int main () {
	Produkt p1("87097RT34", "Kaffee", 7.5);
	cout << p1;
	p1.kategorie();
	p1.getNettoPreis();
	list<Kaffee*> kaffeeListe;
	cout << p1.kategorie();
	//p1.prepare();
	//Kaffee *k1 = new Kaffee("76498CF45", "Kaffee", 4.5, "BLOND", "Kenya");
	//Kaffee *k2 = new Kaffee("76498CF45", "Kaffee", 4.5, "BLOND", "Kenya");
	//kaffeeListe.push_back(k1);

	//system("pause");
	return 0;
}
