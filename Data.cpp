#include <iostream>
#include "Data.h"
#pragma once


using namespace std;


Cdata::Cdata() {

	dzien = 1;
	miesiac = 1;
	rok = 1970;

}


Cdata::Cdata(int dz, int mie, int ro) : dzien(dz), miesiac(mie), rok(ro) {

};

void Cdata::setDzien(int dz) { dzien = dz; }
void Cdata::setMiesiac(int mie) { miesiac = mie; }
void Cdata::setRok(int ro) { rok = ro; }
void Cdata::wyswietl()
{
	cout << dzien << " ";
	cout << miesiac << " ";
	cout << rok << " ";
	
}

int Cdata::getDzien() { return dzien; }
int Cdata::getMiesiac() { return miesiac; }
int Cdata::getRok() { return rok; }