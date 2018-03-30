#pragma once
#include <string>
using namespace std;

class Cadress {

	string ulica;
	string nr_domu;
	int nr_mieszkania;
	string kod_poczt;
	string miasto;
	string wojewodztwo;

public:

	Cadress();
	Cadress(string ul, string nr_dom, int nr_miesz, string kod, string mia, string woj);

	void setUlica(string);
	void setNr_domu(string);
	void setNr_mieszkania(int);
	void setKod_pocztowy(string);
	void setMiasto(string);
	void setWojewodztwo(string);
	void wyswietl();

	string getUlica();
	string getNr_domu();
	int getNr_mieszkania();
	string getKod_pocztowy();
	string getMiasto();
	string getWojewodztwo();

};