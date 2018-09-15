#include <iostream>

using namespace std;

int podajKurs();
int podajKwotePln();
int wymiana();
float eur, usd, chf, pln, sumaWaluty;
string waluta, transakcja;

int main()
{
    cout << "Witamy w kantorze wymiany walut - program ver. 0.2" << endl;
    cout << "=====================================================" << endl;
    podajKurs();
    podajKwotePln();
    wymiana();

    cout << "Wybierz rodzaj transakcji - wpisz KUPNO lub SPRZEDAZ" << endl;
    cin >> transakcja;
    if (transakcja == "KUPNO") {
        cout << "Otrzymasz " << sumaWaluty << " " << waluta << " za " << pln << " PLN" << endl;
    }
    else if (transakcja == "SPRZEDAZ") {
        cout << "Potrzebujesz " << sumaWaluty << " " << waluta << ", aby otrzymac " << pln << " PLN" << endl;
    }
    else {
        cout << "Podano bledna operacje" << endl;
    }
    return 0;
}

int podajKurs()
{
    cout << "Podaj aktualne kursy walut: " << endl;
    cout << "Kurs Euro: " << endl;
    cin >> eur;
    cout << "Kurs Dolara: " << endl;
    cin >> usd;
    cout << "Kurs Franka Szwajcarskiego: " << endl;
    cin >> chf;
};

int podajKwotePln()
{
    cout << "Podaj kwote PLN do wymiany: " << endl;
    cin >> pln;
};

int wymiana()
{
    cout << "Podaj walute ktora chcesz wlaczyc do transakcji" << endl;
    cout << "Wpisz: EUR, USD lub CHF" << endl;
    cin >> waluta;

    if (waluta == "EUR")
    {
        sumaWaluty = pln/eur;
    }
    else if (waluta == "USD")
    {
        sumaWaluty = pln/usd;
    }
    else if (waluta == "CHF")
    {
        sumaWaluty = pln/chf;
    }
    else
    {
        cout << "Podano niewlasciwa walute" << endl;
    }
};

