#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

#include "Rach_biezacy.h"
#include "Bank.h"


#pragma once
using namespace std;

Crach_biezacy::Crach_biezacy() {

	memset(nr_rachunku, '1', sizeof(nr_rachunku));
	stan_rachunku = 0;
	oprocentowanie = 0;
	waluta = "PLN";
	oplaty = 0;
	karta_platnicza = "TAK";

}

Crach_biezacy::Crach_biezacy(char nr_rach[], Cklient wl_rach, double stan_rach, float procent, string walut,
	Cdata d_zal_rach, Cdata d_zamk_rach, float opl, string kar_pl,
	string nazwa_ba, Cadress adres_gl_siedziby, string oddzial_banku,
	Cadress adres_oddzialu)  {

	nr_rachunku[26] = *nr_rach;
	wlasciciel_rach = wl_rach;
	stan_rachunku = stan_rach;
	oprocentowanie = procent;
	waluta = walut;
	data_zalozenia_rach = d_zal_rach;
	data_zamkniecia_rach = d_zamk_rach;
	oplaty = opl;
	karta_platnicza = kar_pl;
	
};

void Crach_biezacy::setNr_rachunku(char nr_rach[]) { nr_rachunku[26] = *nr_rach; }
void Crach_biezacy::setWlasciciel_rach(Cklient wl_rach) { wlasciciel_rach = wl_rach; }
void Crach_biezacy::setStan_rachunku(double stan_rach) { stan_rachunku = stan_rach; }
void Crach_biezacy::setOprocentowanie(float procent) { oprocentowanie = procent; }
void Crach_biezacy::setWaluta(string walut) { waluta = walut; }
void Crach_biezacy::setData_zalozenia_rach(Cdata d_zal_rach) { data_zalozenia_rach = d_zal_rach; }
void Crach_biezacy::setData_zamkniecia_rach(Cdata d_zamk_rach) {data_zamkniecia_rach = d_zamk_rach; }
void Crach_biezacy::setKarta_platnicza(string kar_pl) { karta_platnicza = kar_pl; }
void Crach_biezacy::wyswietl()
{
	cout << nr_rachunku << " ";
	wlasciciel_rach.wyswietl();
	cout << stan_rachunku << " ";
	cout << oprocentowanie << " ";
	cout << waluta << " ";
	data_zalozenia_rach.wyswietl();
	data_zamkniecia_rach.wyswietl();
	cout << karta_platnicza << " ";
	cout << nazwa_banku << " ";
}
void Crach_biezacy::biezace_saldo_rach() {

	cout << "Podaje biezacy stan rachunku : " << stan_rachunku << endl;
	Sleep(1000);
}
void Crach_biezacy::wplata_gotowki() {

	cout << "Na koncie znajduje sie : " << stan_rachunku << endl;
	cout << "Podaj wartosc, jaka chcesz wplacic na konto" << endl;
	cin >> zmienna;
	kwota_po = stan_rachunku + zmienna;
	setStan_rachunku(kwota_po);
	cout << "Po wplacie na koncie znajduje sie : " << kwota_po << endl;
	Sleep(1000);
	
}
void Crach_biezacy::wyplata_gotowki() {

	cout << "Na koncie znajduje sie : " << stan_rachunku << endl;
	cout << "Podaj wartosc, jaka chcesz wyplacic z konta\n";
	cin >> zmienna;
	kwota_po = stan_rachunku - zmienna;
	setStan_rachunku(kwota_po);
	cout << "Po wyplacie na koncie znajduje sie : " << kwota_po << endl;
	Sleep(1000);

}

void Crach_biezacy::przelew_in() {

	cout << "\nBrak mozliwosci uzyskania informacji o przelewach w dniu dziesiejszym\n"
		<< "Przepraszamy\n";
	Sleep(1000);
}

void Crach_biezacy::przelew_out() {

	cout << "\nBrak mozliwosci wykonania przelewu w dniu dziesiejszym\n"
		<< "Przepraszamy\n";
	Sleep(1000);

}
void Crach_biezacy::zamkniecie_rach() {

	cout << "\nBrak mozliwosci zamkniecia konta w dniu dziesiejszym\n"
		<< "Przepraszamy\n";
	Sleep(1000);
}


char* Crach_biezacy::getNr_rachunku() { return nr_rachunku; }
Cklient Crach_biezacy::getWlasciciel() { return wlasciciel_rach; }
double Crach_biezacy::getStan_rachunku() { return stan_rachunku; }
float Crach_biezacy::getOprocentowanie() { return oprocentowanie; }
string Crach_biezacy::getWaluta() { return waluta; }
Cdata Crach_biezacy::getData_zalozenia_rach() { return data_zalozenia_rach; }
Cdata Crach_biezacy::getData_zamkniecia_rach() { return data_zamkniecia_rach; }
string Crach_biezacy::getKarta_platnicza() { return karta_platnicza; }






