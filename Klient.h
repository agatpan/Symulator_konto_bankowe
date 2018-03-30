#pragma once
#include <string>
#include "Data.h"
#include "Adres.h"
using namespace std;

class Cklient {

	string imie;
	string nazwisko;
	long id_klienta;
	Cdata data_urodzenia;
	Cadress adres_kilenta;

public:

	Cklient();
	Cklient(long, string, string, Cdata, Cadress);
	
	void setId_klienta(long);
	void setImie(string);
	void setNazwisko(string);
	void setData_urodzenia(Cdata);
	void setAdres_klienta(Cadress);
	void wyswietl();

	long getId_klienta();
	string getImie();
	string getNazwisko();
	Cdata getData_urodzenia();
	Cadress getAdres_klienta();

};