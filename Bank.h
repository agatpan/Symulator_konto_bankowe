#pragma once
#include <string>
#include <iostream>
#include "Adres.h"
using namespace std;

class Cbank{

protected:
	string nazwa_banku;
	Cadress adres_gl_siedziby;
	string oddzial_banku;
	Cadress adres_oddzialu;


public:
	Cbank();
	Cbank(string nazwa, Cadress ad_gl, string oddzial, Cadress ad_oddzilu);

	void setNazwa_banku(string);
	void setAdres_gl_siedziby(Cadress);
	void setOddzial_banku(string);
	void setAdres_oddzialu(Cadress);
	void wyswietl();

	string getNazwa_banku();
	Cadress getAdres_gl_siedziby();
	string getOddzial_banku();
	Cadress getAdres_oddzialu();

};

