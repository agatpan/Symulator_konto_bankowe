#include <iostream>
#include "Klient.h"
#include "Adres.h"
#pragma once

using namespace std;

Cklient::Cklient() {

	id_klienta = 0;
	imie = "NA";
	nazwisko = "NA";
	}


Cklient::Cklient(long id_kl, string im, string naz, Cdata d_ur, Cadress ad_kl) :
	id_klienta(id_kl), imie(im), nazwisko(naz), data_urodzenia(d_ur), adres_kilenta(ad_kl) {
		
};

void Cklient::setImie(string im) { imie = im; }
void Cklient::setNazwisko(string naz) { nazwisko = naz; }
void Cklient::setId_klienta(long id_kl) { id_klienta = id_kl;  }
void Cklient::setData_urodzenia(Cdata d_ur) { data_urodzenia = d_ur; }
void Cklient::setAdres_klienta(Cadress ad_kl) { adres_kilenta = ad_kl; }
void Cklient::wyswietl()
{
	cout << id_klienta << " ";
	cout << imie << " ";
	cout << nazwisko << " ";
	data_urodzenia.wyswietl();
	adres_kilenta.wyswietl();
}

long Cklient::getId_klienta() { return id_klienta; }
string Cklient::getImie() { return imie; }
string Cklient::getNazwisko() { return nazwisko; }
Cdata Cklient::getData_urodzenia() { return data_urodzenia; }
Cadress Cklient::getAdres_klienta() { return adres_kilenta; }