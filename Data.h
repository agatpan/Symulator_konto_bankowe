#pragma once


class Cdata {

	int dzien;
	int miesiac;
	int rok;

public:

	Cdata();
	Cdata(int, int, int);

	void setDzien(int);
	void setMiesiac(int);
	void setRok(int);
	void wyswietl();

	int getDzien();
	int getMiesiac();
	int getRok();

};
