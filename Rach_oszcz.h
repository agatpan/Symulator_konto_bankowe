#pragma once
#include <string>
#include "Klient.h"
#include "Data.h"
#include "Bank.h"
#include "Rach_biezacy.h"

using namespace std;

class Crach_oszczed : public Crach_biezacy {

public:
	Crach_oszczed();

	Crach_oszczed(char nr_rach[], Cklient wl_rach, float stan_rach,
		float procent, string walut,
		Cdata d_zal_rach, Cdata d_zamk_rach, float opl, string kar_pl,
		string nazwa_banku, Cadress adres_gl_siedziby, string oddzial_banku,
		Cadress adres_oddzialu);
};