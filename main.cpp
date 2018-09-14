#include <iostream>

using namespace std;

int podajKurs();
int podajKwotePln();
int kupno();
int sprzedaz();
float eur, usd, chf, pln, sumaWaluty;
string waluta, transakcja;

int main()
{
    cout << "Witamy w kantorze wymiany walut - program ver. 0.1" << endl;
    cout << "=====================================================" << endl;
    podajKurs();
    podajKwotePln();

    cout << "Wybierz rodzaj transakcji - wpisz KUPNO lub SPRZEDAZ" << endl;
    cin >> transakcja;
    if (transakcja == "KUPNO") {
        kupno();
    }
    else if (transakcja == "SPRZEDAZ") {
        sprzedaz();
    }
    else {
        cout << "Podano bledna operacje" << endl;
    }


    return 0;
}

int podajKurs() {
    cout << "Podaj aktualne kursy walut: " << endl;
    cout << "Kurs Euro: " << endl;
    cin >> eur;
    cout << "Kurs Dolara: " << endl;
    cin >> usd;
    cout << "Kurs Franka Szwajcarskiego: " << endl;
    cin >> chf;
};

int podajKwotePln() {
    cout << "Podaj kwote PLN do wymiany: " << endl;
    cin >> pln;
};

int kupno() {

    cout << "Podaj walute ktora chcesz kupic" << endl;
    cout << "Wpisz: EUR, USD lub CHF" << endl;
    cin >> waluta;

    if (waluta == "EUR") {
        sumaWaluty = pln/eur;
        cout << "Otrzymasz " << sumaWaluty << " EUR" << " za " << pln << " PLN" <<endl;
    }
    else if (waluta == "USD") {
        sumaWaluty = pln/usd;
        cout << "Otrzymasz " << sumaWaluty << " USD" << " za " << pln << " PLN" <<endl;
    }
    else if (waluta == "CHF") {
        sumaWaluty = pln/chf;
        cout << "Otrzymasz " << sumaWaluty << " CHF" << " za " << pln << " PLN" <<endl;
    }
    else {
        cout << "Podano niewlasciwa walute" << endl;
    }
};

int sprzedaz() {
    cout << "Podaj walute ktora chcesz sprzedac" << endl;
    cout << "Wpisz: EUR, USD lub CHF" << endl;
    cin >> waluta;

    if (waluta == "EUR") {
        sumaWaluty = pln/eur;
        cout << "Potrzebujesz " << sumaWaluty << " EUR" << ", aby otrzymac " << pln << " PLN" <<endl;
    }
    else if (waluta == "USD") {
        sumaWaluty = pln/usd;
        cout << "Potrzebujesz " << sumaWaluty << " USD" << ", aby otrzymac " << pln << " PLN" <<endl;
    }
    else if (waluta == "CHF") {
        sumaWaluty = pln/chf;
        cout << "Potrzebujesz " << sumaWaluty << " CHF" << ", aby otrzymac " << pln << " PLN" <<endl;
    }
    else {
        cout << "Podano niewlasciwa walute" << endl;
    }
};
