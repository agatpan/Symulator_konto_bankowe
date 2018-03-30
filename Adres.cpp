#include <iostream>
#include "Adres.h"
#pragma once

using namespace std;

Cadress::Cadress() {

	ulica = "NA";
	nr_domu = "NA";
	nr_mieszkania = 0;
	kod_poczt = "NA";
	miasto = "NA";
	wojewodztwo = "NA";

}

Cadress::Cadress(string ul, string nr_dom, int nr_miesz, string kod, string mia, string woj) :
	ulica(ul), nr_domu(nr_dom), nr_mieszkania(nr_miesz), kod_poczt(kod), miasto(mia), wojewodztwo(woj) {

};

void Cadress::setUlica(string ul) { ulica = ul; }
void Cadress::setNr_domu(string nr_dom) { nr_domu = nr_dom; }
void Cadress::setNr_mieszkania(int nr_miesz) { nr_mieszkania = nr_miesz; }
void Cadress::setKod_pocztowy(string kod) { kod_poczt = kod; }
void Cadress::setMiasto(string mia) { miasto = mia; }
void Cadress::setWojewodztwo(string woj) { wojewodztwo = woj; }

void Cadress::wyswietl()
{
	cout << ulica << " ";
	cout << nr_domu << " ";
	cout << nr_mieszkania << " ";
	cout << kod_poczt << " ";
	cout << miasto << " ";
	cout << wojewodztwo << " ";
}

string Cadress::getUlica() { return miasto; }
string Cadress::getNr_domu() { return nr_domu; }
int Cadress::getNr_mieszkania() { return nr_mieszkania; }
string Cadress::getKod_pocztowy() { return kod_poczt; }
string Cadress::getMiasto() { return miasto; }
string Cadress::getWojewodztwo() { return wojewodztwo; }