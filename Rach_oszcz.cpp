#include <iostream>
#include <string>
#include "Rach_biezacy.h"
#include "Bank.h"
#include "Rach_oszcz.h"

#pragma once
using namespace std;

Crach_oszczed::Crach_oszczed() {

	oprocentowanie = 3.0;
	karta_platnicza = "NIE";
	}

Crach_oszczed::Crach_oszczed(char nr_rach[], Cklient wl_rach, float stan_rach, 
	float procent, string walut, Cdata d_zal_rach, Cdata d_zamk_rach, 
	float opl, string kar_pl, string nazwa_banku, Cadress adres_gl_siedziby, 
	string oddzial_banku, Cadress adres_oddzialu) {	

	};