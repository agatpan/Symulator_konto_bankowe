#include <iostream>
#include "Klient.h"
#include "Adres.h"
#include "Bank.h"
#pragma once

using namespace std;

Cbank::Cbank() {

	nazwa_banku = "NA";
	oddzial_banku = "NA";
	
}
Cbank::Cbank(string nazwa, Cadress ad_gl, string oddzial, Cadress ad_oddzialu) {
	nazwa_banku = nazwa;
	adres_gl_siedziby = ad_gl;
	oddzial_banku = oddzial;
	adres_oddzialu = ad_oddzialu;
}

void Cbank::setNazwa_banku(string nazwa) { nazwa_banku = nazwa; }
void Cbank::setAdres_gl_siedziby(Cadress ad_gl) { adres_gl_siedziby = ad_gl; }
void Cbank::setOddzial_banku(string oddzial) { oddzial_banku = oddzial; }
void Cbank::setAdres_oddzialu(Cadress ad_oddzialu) { adres_oddzialu = ad_oddzialu; }
void Cbank::wyswietl() 
{
	cout << nazwa_banku << " ";
	adres_gl_siedziby.wyswietl();
	cout << oddzial_banku << " ";
	adres_oddzialu.wyswietl();
}

string Cbank::getNazwa_banku() { return nazwa_banku; }
Cadress Cbank::getAdres_gl_siedziby() { return adres_gl_siedziby; }
string Cbank::getOddzial_banku() { return oddzial_banku; }
Cadress Cbank::getAdres_oddzialu() { return adres_oddzialu; }