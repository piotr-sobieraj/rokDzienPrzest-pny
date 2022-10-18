#pragma once

#include<iostream>
#include "liczbaDniObliczenia.h"
using namespace std;

class interfejsUżytkownika {
    public: 
        void static pobierzDane(liczbaDniObliczenia &obliczenia);
        void static wypiszLiczbeDniNaMiesiącRok(const liczbaDniObliczenia &obliczenia);
};


void interfejsUżytkownika::pobierzDane(liczbaDniObliczenia &obliczenia) {
    cout << "Podaj miesiąc i rok odzielone spacją > ";
    cin >> obliczenia.miesiąc >> obliczenia.rok; 
}


void interfejsUżytkownika::wypiszLiczbeDniNaMiesiącRok(const liczbaDniObliczenia &obliczenia) 
{
    cout << "W " << obliczenia.miesiąc << ". miesiącu roku " << obliczenia.rok << " jest "
                 << obliczenia.liczbaDniWmies << " dni." << endl;
    
    cout << "Rok " << obliczenia.rok << " ma " << obliczenia.liczbaDniWroku << " dni." << endl << endl;
}