# Program-Kantor

Program obliczający kwoty uzyskane przy transakcjach kupna sprzedaży walut obcych / The program calculating the amounts obtained with foreign currency exchange transactions

Program pisany w języku C++

Wersja 0.2
Zmieniono:
- dokonano refaktoryzacji kodu: zastąpiono dwie funkcje 'int kupno();' i 'sprzedaz();' jedną bardziej czytelną funkcją 'wymiana();'
- w niektórych miejscach poprawiono formatowanie zapisanego kodu

Obecnie zaprogramowane działania:
- możliwość podania kursów trzech walut obcych (EUR, USD, CHF)
- podania kwoty złotych polskich, które mają zostać kupione/sprzedane
- wybór rodzaju transakcji
- przeprowadzenie transakcji kupna lub sprzedaży
