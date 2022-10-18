#include "liczbaDniObliczenia.h"
#include "interfejsUżytkownika.h"

/*
Program oblicza liczbę dni w miesiącu i liczbę dni w roku dla podanego miesiąca
i roku. Użycie wypiszLiczbeDniNaMiesiącRok(int miesiąc, int rok). Np.
wypiszLiczbeDniNaMiesiącRok(2, 2020).
*/

int main() {
    liczbaDniObliczenia liczbaDniObl;
    interfejsUżytkownika::pobierzDane(liczbaDniObl);
    liczbaDniObl.wykonajObliczenia();
    interfejsUżytkownika::wypiszLiczbeDniNaMiesiącRok(liczbaDniObl);
    main();
}