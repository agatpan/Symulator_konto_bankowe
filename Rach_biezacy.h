#pragma once
#include <string>
#include "Klient.h"
#include "Data.h"
#include "Bank.h"

using namespace std;

class Crach_biezacy : public Cbank {

protected:
	
	char nr_rachunku[26];
	Cklient wlasciciel_rach;
	float oprocentowanie;
	string waluta;
	Cdata data_zalozenia_rach;
	Cdata data_zamkniecia_rach;
	float oplaty;
	string karta_platnicza;
	
public:
	double stan_rachunku;
	float zmienna;
	double kwota_po;
	Crach_biezacy();

	Crach_biezacy(char nr_rach[], Cklient wl_rach, double stan_rach,
			float procent, string walut,
			Cdata d_zal_rach, Cdata d_zamk_rach, float opl, string kar_pl,
			string nazwa_banku, Cadress adres_gl_siedziby, string oddzial_banku, 
			Cadress adres_oddzialu);
	

	void setNr_rachunku(char[]);
	void setWlasciciel_rach(Cklient);
	void setStan_rachunku(double);
	void setOprocentowanie(float);
	void setWaluta(string);
	void setData_zalozenia_rach(Cdata);
	void setData_zamkniecia_rach(Cdata);
	void setKarta_platnicza(string);
	void wyswietl();
	void biezace_saldo_rach();
	void wplata_gotowki();
	void wyplata_gotowki();
	void przelew_in();
	void przelew_out();
	void zamkniecie_rach();


	char* getNr_rachunku();
	Cklient getWlasciciel();
	double getStan_rachunku();
	float getOprocentowanie();
	string getWaluta();
	Cdata getData_zalozenia_rach();
	Cdata getData_zamkniecia_rach();
	string getKarta_platnicza();
	
};
