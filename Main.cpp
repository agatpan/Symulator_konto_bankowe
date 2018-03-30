#include <iostream>
#include "Data.h"
#include "Klient.h"
#include "Adres.h"
#include "Bank.h"
#include "Rach_biezacy.h"
#include "Rach_oszcz.h"
#include "Rach_walut.h"
using namespace std;


int ktory_rach;
int ktory_klient;
int rodz_operacji;
Crach_biezacy rach_biezacy_1;
Crach_biezacy rach_biezacy_2;
Crach_biezacy rach_biezacy_3;
Crach_oszczed rach_oszczed_1;
Crach_oszczed rach_oszczed_2;
Crach_oszczed rach_oszczed_3;
Crach_walutowy rach_walutowy_1;
Crach_walutowy rach_walutowy_2;
Crach_walutowy rach_walutowy_3;


int main() {

	Cdata data_ur_kl_1 = Cdata(6, 11, 1980);
	Cdata data_ur_kl_2 = Cdata(25, 05, 1956);
	Cdata data_ur_kl_3 = Cdata(11, 03, 1990);

	Cadress adres_klienta_1 = Cadress("Panska", "5 C", 2, "80-570", "Gdansk", "pomorskie");
	Cadress adres_klienta_2 = Cadress("Igielnicka", "12 A", 6, "80-130", "Gdansk", "pomorskie");
	Cadress adres_klienta_3 = Cadress("Wielkopolska", "83", NULL, "81-345", "Gdynia", "pomorskie");
	Cadress adres_gl_siedziby_1 = Cadress("Krucza", "5 B", NULL, "00-100", "Warszawa", "mazowieckie");
	Cadress adres_oddzialu_1 = Cadress("Rajska", "5", 2, "80-124", "Gdansk", "pomorskie");
	Cadress adres_oddzialu_2 = Cadress("Grunwaldzka", "157", 1, "80-680", "Gdansk", "pomorskie");
	Cadress adres_oddzialu_3 = Cadress("Wladyslawa IV", "30", NULL, "81-143", "Gdynia", "pomorskie");

	Cklient klient_1;
	klient_1 = Cklient(345678, "Jan", "Kowalski", data_ur_kl_1, adres_klienta_1);
	Cklient klient_2;
	klient_2 = Cklient(948210, "Anna", "Nowak", data_ur_kl_2, adres_klienta_2);
	Cklient klient_3;
	klient_3 = Cklient(184065, "Grzegorz", "Iksinski", data_ur_kl_3, adres_klienta_3);

	Cbank oddzial_1;
	oddzial_1 = Cbank("Kasa Bank", adres_gl_siedziby_1, "Pierwszy Oddzial w Gdansku", adres_oddzialu_1);
	Cbank oddzial_2;
	oddzial_2 = Cbank("Kasa Bank", adres_gl_siedziby_1, "Drugi Oddzial w Gdanku", adres_oddzialu_2);
	Cbank oddzial_3;
	oddzial_3 = Cbank("Kasa Bank", adres_gl_siedziby_1, "Pierwszy oddzial w Gdyni", adres_oddzialu_3);


	cout << "Witamy w Kasa Bank.\n"
		<< "Aby skozystac z naszych uslug\n"
		<< "Podaj identyfikator klienta Banku : \n"
		<< "nr 345678 - Klient 1 \nnr 948210 - Klient 2 \n"
		<< "nr 184065 - Klient 3 \n";
	cout << "\nWybrano nr : ";
	cin >> ktory_klient;

	switch (ktory_klient)
	{
	case 345678: {
		cout << "Wybrales dane klienta : \n";
		klient_1.wyswietl();
		cout << endl;

		cout << "\nJaki rodzaj rachunku bankowego chcesz wybrac dla tego klienta: \n"
			<< "nr 1 - Rachunek biezacy \nnr 2 - Rachunek oszczednosciowy \n"
			<< "nr 3 - Rachunek walutowy \nnr 4 - Rachunek lokaty \n";
		cout << "\nWybrano nr : ";
		cin >> ktory_rach;

		switch (ktory_rach)
		{
		case 1: {
			Crach_biezacy rach_biezacy_1;
			cout << "\nOperacje na rachunku biezacym klienta 345678 : \n";
			cout << "Dane Oddzialu Banku : \n";
			oddzial_1.wyswietl();
			char*konto_biez_1 = "12345678901234567890123456";
			printf("\nNumer konta rachunku biezacego : %s\n", konto_biez_1);
			rach_biezacy_1.stan_rachunku = 1000.19;

			do {

				cout << "\nWybierz numer rodzaju uslugi bankowej : \n"
					<< "\nnr 1 - Biezace saldo rachunku "
					<< "\nnr 2 - Operacja wplaty gotowki "
					<< "\nnr 3 - Operacja wyplaty gotowki "
					<< "\nnr 4 - Przelew przychodzacy"
					<< "\nnr 5 - Przelew wychodzacy"
					<< "\nnr 6 - Zamkniecie rachunku"
					<< "\nnr 7 - Wyjscie z programu " << endl;
				cout << "\nWybrano numer : ";
				cin >> rodz_operacji;

				switch (rodz_operacji)
				{
				case 1: {
					rach_biezacy_1.biezace_saldo_rach();
				} break;
				case 2: {
					rach_biezacy_1.wplata_gotowki();
				} break;
				case 3: {
					rach_biezacy_1.wyplata_gotowki();
				} break;
				case 4: {
					rach_biezacy_1.przelew_in();
				} break;
				case 5: {
					rach_biezacy_1.przelew_out();
				} break;
				case 6: {
					rach_biezacy_1.zamkniecie_rach();
				} break;
				case 7: {
					cout << "\nDziekujemy za skozystanie z uslug naszego banku\n"
						<< "Zostales poprawnie wylogowany z systemu\n";
				} break;
				default:
					cout << "\nWybrano nr : " << rodz_operacji
						<< "\nBrak takiego rodzaju operacji banowej\n";
					break;
				}
			} while (rodz_operacji != 7);
		} break;

		case 2: {
			Crach_oszczed rach_oszczed_1;
			cout << "\nOperacje na rachunku oszczednosciowym klienta 345678 : \n";
			cout << "Dane Oddzialu Banku : \n";
			oddzial_1.wyswietl();
			char*konto_oszcz_1 = "98765432109876543210123456";
			printf("\nNumer konta rachunku oszczednosciowego : %s\n", konto_oszcz_1);
			rach_oszczed_1.stan_rachunku = 20509.11;

			do {
				cout << "\nWybierz numer rodzaju uslugi bankowej : \n"
					<< "\nnr 1 - Biezace saldo rachunku "
					<< "\nnr 2 - Operacja wplaty gotowki "
					<< "\nnr 3 - Operacja wyplaty gotowki "
					<< "\nnr 4 - Przelew przychodzacy"
					<< "\nnr 5 - Przelew wychodzacy"
					<< "\nnr 6 - Zamkniecie rachunku"
					<< "\nnr 7 - Wyjscie z programu " << endl;
				cout << "\nWybrano numer : ";
				cin >> rodz_operacji;

				switch (rodz_operacji)
				{
				case 1: {
					rach_oszczed_1.biezace_saldo_rach();
				} break;
				case 2: {
					rach_oszczed_1.wplata_gotowki();
				} break;
				case 3: {
					rach_oszczed_1.wyplata_gotowki();
				} break;
				case 4: {
					rach_oszczed_1.przelew_in();
				} break;
				case 5: {
					rach_oszczed_1.przelew_out();
				} break;
				case 6: {
					rach_oszczed_1.zamkniecie_rach();
				} break;
				case 7: {
					cout << "\nDziekujemy za skozystanie z uslug naszego banku\n"
						<< "Zostales poprawnie wylogowany z systemu\n";
				} break;
				default:
					cout << "\nWybrano nr : " << rodz_operacji
						<< "\nBrak takiego rodzaju operacji banowej\n";
					break;
				}
			} while (rodz_operacji != 7);
		} break;

		case 3: {
			Crach_walutowy rach_walutowy_1;
			cout << "\nOperacje na rachunku walutowym klienta 345678 : \n";;
			cout << "Dane Oddzialu Banku : \n";
			oddzial_1.wyswietl();
			char*konto_walut_1 = "24680135792468013579246801";
			printf("\nNumer konta rachunku walutowego : %s\n", konto_walut_1);
			rach_walutowy_1.stan_rachunku = 305.83;

			do {
				cout << "\nWybierz numer rodzaju uslugi bankowej : \n"
					<< "\nnr 1 - Biezace saldo rachunku "
					<< "\nnr 2 - Operacja wplaty gotowki "
					<< "\nnr 3 - Operacja wyplaty gotowki "
					<< "\nnr 4 - Przelew przychodzacy"
					<< "\nnr 5 - Przelew wychodzacy"
					<< "\nnr 6 - Zamkniecie rachunku"
					<< "\nnr 7 - Wyjscie z programu " << endl;
				cout << "\nWybrano numer : ";
				cin >> rodz_operacji;

				switch (rodz_operacji)
				{
				case 1: {
					rach_walutowy_1.biezace_saldo_rach();
				} break;
				case 2: {
					rach_walutowy_1.wplata_gotowki();
				} break;
				case 3: {
					rach_walutowy_1.wyplata_gotowki();
				} break;
				case 4: {
					rach_walutowy_1.przelew_in();
				} break;
				case 5: {
					rach_walutowy_1.przelew_out();
				} break;
				case 6: {
					rach_walutowy_1.zamkniecie_rach();
				} break;
				case 7: {
					cout << "\nDziekujemy za skozystanie z uslug naszego banku\n"
						<< "Zostales poprawnie wylogowany z systemu\n";
				} break;
				default:
					cout << "\nWybrano nr : " << rodz_operacji
						<< "\nBrak takiego rodzaju operacji banowej\n";
					break;
				}
			} while (rodz_operacji != 7);
		}	break;

		case 4:
			cout << "Brak danych o rachunku lokaty klienta 345678 \n";
			break;

		default:
			cout << "Wybrales nr : " << ktory_rach
				<< " - niewlasciwy rodzaj rachunku bankowego \n";
			break;
		}
	} break;

	case 948210: {
		cout << "Wybrales dane klienta : \n";
		klient_2.wyswietl();
		cout << endl;

		cout << "\nJaki rodzaj rachunku bankowego chcesz wybrac dla tego klienta: \n"
			<< "nr 1 - Rachunek biezacy \nnr 2 - Rachunek oszczednosciowy \n"
			<< "nr 3 - Rachunek walutowy \nnr 4 - Rachunek lokaty \n";
		cout << "\nWybrano nr : ";
		cin >> ktory_rach;

		switch (ktory_rach)
		{
		case 1: {
			Crach_biezacy rach_biezacy_2;
			cout << "\nOperacje na rachunku biezacym klienta 948210 : \n";
			cout << "Dane Oddzialu Banku : \n";
			oddzial_2.wyswietl();
			char*konto_biez_2 = "12345678900987654321123456";
			printf("\nNumer konta rachunku biezacego : %s\n", konto_biez_2);
			rach_biezacy_2.stan_rachunku = 5489.63;

			do {
				cout << "\nWybierz numer rodzaju uslugi bankowej : \n"
					<< "\nnr 1 - Biezace saldo rachunku "
					<< "\nnr 2 - Operacja wplaty gotowki "
					<< "\nnr 3 - Operacja wyplaty gotowki "
					<< "\nnr 4 - Przelew przychodzacy"
					<< "\nnr 5 - Przelew wychodzacy"
					<< "\nnr 6 - Zamkniecie rachunku"
					<< "\nnr 7 - Wyjscie z programu " << endl;
				cout << "\nWybrano numer : ";
				cin >> rodz_operacji;

				switch (rodz_operacji)
				{
				case 1: {
					rach_biezacy_2.biezace_saldo_rach();
				} break;
				case 2: {
					rach_biezacy_2.wplata_gotowki();
				} break;
				case 3: {
					rach_biezacy_2.wyplata_gotowki();
				} break;
				case 4: {
					rach_biezacy_2.przelew_in();
				} break;
				case 5: {
					rach_biezacy_2.przelew_out();
				} break;
				case 6: {
					rach_biezacy_2.zamkniecie_rach();
				} break;
				case 7: {
					cout << "\nDziekujemy za skozystanie z uslug naszego banku\n"
						<< "Zostales poprawnie wylogowany z systemu\n";
				} break;
				default: {
					cout << "\nWybrano nr : " << rodz_operacji
						<< "\nBrak takiego rodzaju operacji banowej\n";
				} break;
				}
			} while (rodz_operacji != 7);
		} break;

		case 2:
			cout << "Brak danych o rachunku oszczednosciowym klienta 948210 \n";
			break;

		case 3: {
			Crach_walutowy rach_walutowy_2;
			cout << "\nOperacje na rachunku walutowym klienta 948210 : \n";;
			cout << "Dane Oddzialu Banku : \n";
			oddzial_2.wyswietl();
			char*konto_walut_2 = "24680123456789013579246801";
			printf("\nNumer konta rachunku walutowego : %s\n", konto_walut_2);
			rach_walutowy_2.stan_rachunku = 1507.20;

			do {
				cout << "\nWybierz numer rodzaju uslugi bankowej : \n"
					<< "\nnr 1 - Biezace saldo rachunku "
					<< "\nnr 2 - Operacja wplaty gotowki "
					<< "\nnr 3 - Operacja wyplaty gotowki "
					<< "\nnr 4 - Przelew przychodzacy"
					<< "\nnr 5 - Przelew wychodzacy"
					<< "\nnr 6 - Zamkniecie rachunku"
					<< "\nnr 7 - Wyjscie z programu " << endl;
				cout << "\nWybrano numer : ";
				cin >> rodz_operacji;

				switch (rodz_operacji)
				{
				case 1: {
					rach_walutowy_2.biezace_saldo_rach();
				} break;
				case 2: {
					rach_walutowy_2.wplata_gotowki();
				} break;
				case 3: {
					rach_walutowy_2.wyplata_gotowki();
				} break;
				case 4: {
					rach_walutowy_2.przelew_in();
				} break;
				case 5: {
					rach_walutowy_2.przelew_out();
				} break;
				case 6: {
					rach_walutowy_2.zamkniecie_rach();
				} break;
				case 7: {
					cout << "\nDziekujemy za skozystanie z uslug naszego banku\n"
						<< "Zostales poprawnie wylogowany z systemu\n";
				} break;
				default:
					cout << "\nWybrano nr : " << rodz_operacji
						<< "\nBrak takiego rodzaju operacji banowej\n";
					break;
				}
			} while (rodz_operacji != 7);
		}	break;

		case 4:
			cout << "Brak danych o rachunku lokaty klienta 948210 \n";
			break;

		default:
			cout << "Wybrales nr : " << ktory_rach
				<< " - niewlasciwy rodzaj rachunku bankowego \n";
			break;
		}
	}	break;


	case 184065: {
		cout << "Wybrales dane klienta : \n";
		klient_3.wyswietl();
		cout << endl;

		cout << "\nJaki rodzaj rachunku bankowego chcesz wybrac dla tego klienta : \n"
			<< "nr 1 - Rachunek biezacy \nnr 2 - Rachunek oszczednosciowy \n"
			<< "nr 3 - Rachunek walutowy \nnr 4 - Rachunek lokaty \n";
		cout << "\nWybrano nr : ";
		cin >> ktory_rach;

		switch (ktory_rach)
		{
		case 1: {
			Crach_biezacy rach_biezacy_3;
			cout << "Operacje na rachunku biezacym\n";
			cout << "Dane Oddzialu Banku : \n";
			oddzial_3.wyswietl();
			char*konto_biez_3 = "12345678901234567890123456";
			printf("\nNumer konta rachunku biezacego : %s\n", konto_biez_3);
			rach_biezacy_3.stan_rachunku = 890.12;

			do {
				cout << "\nWybierz numer rodzaju uslugi bankowej : \n"
					<< "\nnr 1 - Biezace saldo rachunku "
					<< "\nnr 2 - Operacja wplaty gotowki "
					<< "\nnr 3 - Operacja wyplaty gotowki "
					<< "\nnr 4 - Przelew przychodzacy"
					<< "\nnr 5 - Przelew wychodzacy"
					<< "\nnr 6 - Zamkniecie rachunku"
					<< "\nnr 7 - Wyjscie z programu " << endl;
				cout << "\nWybrano numer : ";
				cin >> rodz_operacji;

				switch (rodz_operacji)
				{
				case 1: {
					rach_biezacy_3.biezace_saldo_rach();
				} break;
				case 2: {
					rach_biezacy_3.wplata_gotowki();
				} break;
				case 3: {
					rach_biezacy_3.wyplata_gotowki();
				} break;
				case 4: {
					rach_biezacy_3.przelew_in();
				} break;
				case 5: {
					rach_biezacy_3.przelew_out();
				} break;
				case 6: {
					rach_biezacy_3.zamkniecie_rach();
				} break;
				case 7: {
					cout << "\nDziekujemy za skozystanie z uslug naszego banku\n"
						<< "Zostales poprawnie wylogowany z systemu\n";
				} break;
				default:
					cout << "\nWybrano nr : " << rodz_operacji
						<< "\nBrak takiego rodzaju operacji banowej\n";
					break;
				}
			} while (rodz_operacji != 7);
		}	break;

		case 2: {
			Crach_oszczed rach_oszczed_3;
			cout << "Operacje na rachunku oszczednosciowym\n";
			cout << "Dane Oddzialu Banku : \n";
			oddzial_3.wyswietl();
			char*konto_oszcz_3 = "98765432109876543210126543";
			printf("\nNumer konta rachunku oszczednosciowego : %s\n", konto_oszcz_3);
			rach_oszczed_3.stan_rachunku = 12009.81;

			do {
				cout << "\nWybierz numer rodzaju uslugi bankowej : \n"
					<< "\nnr 1 - Biezace saldo rachunku "
					<< "\nnr 2 - Operacja wplaty gotowki "
					<< "\nnr 3 - Operacja wyplaty gotowki "
					<< "\nnr 4 - Przelew przychodzacy"
					<< "\nnr 5 - Przelew wychodzacy"
					<< "\nnr 6 - Zamkniecie rachunku"
					<< "\nnr 7 - Wyjscie z programu " << endl;
				cout << "\nWybrano numer : ";
				cin >> rodz_operacji;

				switch (rodz_operacji)
				{
				case 1: {
					rach_oszczed_3.biezace_saldo_rach();
				} break;
				case 2: {
					rach_oszczed_3.wplata_gotowki();
				} break;
				case 3: {
					rach_oszczed_3.wyplata_gotowki();
				} break;
				case 4: {
					rach_oszczed_3.przelew_in();
				} break;
				case 5: {
					rach_oszczed_3.przelew_out();
				} break;
				case 6: {
					rach_biezacy_1.zamkniecie_rach();
				} break;
				case 7: {
					cout << "\nDziekujemy za skozystanie z uslug naszego banku\n"
						<< "Zostales poprawnie wylogowany z systemu\n";
				} break;
				default:
					cout << "\nWybrano nr : " << rodz_operacji
						<< "\nBrak takiego rodzaju operacji banowej\n";
					break;
				}
			} while (rodz_operacji != 7);
		}	break;

		case 3: {
			Crach_walutowy rach_walutowy_3;
			cout << "Operacje na rachunku walutowym\n";
			cout << "Dane Oddzialu Banku : \n";
			oddzial_3.wyswietl();
			char*konto_walut_3 = "24068135792468013579246801";
			printf("\nnumer konta rachunku walutowego : %s\n", konto_walut_3);
			rach_walutowy_3.stan_rachunku = 2490.00;

			do {
				cout << "\nWybierz numer rodzaju uslugi bankowej : \n"
					<< "\nnr 1 - Biezace saldo rachunku "
					<< "\nnr 2 - Operacja wplaty gotowki "
					<< "\nnr 3 - Operacja wyplaty gotowki "
					<< "\nnr 4 - Przelew przychodzacy"
					<< "\nnr 5 - Przelew wychodzacy"
					<< "\nnr 6 - Zamkniecie rachunku"
					<< "\nnr 7 - Wyjscie z programu " << endl;
				cout << "\nWybrano numer : ";
				cin >> rodz_operacji;

				switch (rodz_operacji)
				{
				case 1: {
					rach_walutowy_3.biezace_saldo_rach();
				} break;
				case 2: {
					rach_walutowy_3.wplata_gotowki();
				} break;
				case 3: {
					rach_walutowy_3.wyplata_gotowki();
				} break;
				case 4: {
					rach_walutowy_3.przelew_in();
				} break;
				case 5: {
					rach_walutowy_3.przelew_out();
				} break;
				case 6: {
					rach_walutowy_3.zamkniecie_rach();
				} break;
				case 7: {
					cout << "\nDziekujemy za skozystanie z uslug naszego banku\n"
						<< "Zostales poprawnie wylogowany z systemu\n";
				} break;
				default:
					cout << "\nWybrano nr : " << rodz_operacji
						<< "\nBrak takiego rodzaju operacji banowej\n";
					break;
				}
			} while (rodz_operacji != 7);
		}	break;

		case 4: {
			cout << "Brak danych o rachunku lokaty klienta 184065 \n";
		}	break;

		default: {
			cout << "Wybrales nr : " << ktory_rach
				<< " - niewlasciwy rodzaj rachunku bankowego \n";
		}	break;
		}	break;
	default: {
		cout << "\nWybrales identyfikator klienta : " << ktory_klient
			<< " - brak informacji o takim numerze klienta w bazie banku \n";
	}	break;
	}	break;
	}
	system("pause");
	return 0;
}