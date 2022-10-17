#include <iostream>
using namespace std;
int miesiąc, rok;
/*
Program oblicza liczbę dni w miesiącu i liczbę dni w roku dla podanego miesiąca
i roku. Użycie wypiszLiczbeDniNaMiesiącRok(int miesiąc, int rok). Np.
wypiszLiczbeDniNaMiesiącRok(2, 2020).
*/

bool czyPrzestępny(int rok) {
  return ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0);
}

int dajLiczbęDniWRoku(int rok) { return czyPrzestępny(rok) ? 366 : 365; }

int dajLiczbęDniWMiesiącu(int miesiąc, bool czyPrzestępny) {
  switch (miesiąc) {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
          return 31;
      case 2:
          return czyPrzestępny ? 29 : 28;
      default:
          return 30;
  }
}

void wypiszLiczbeDniNaMiesiącRok(int miesiąc, int rok) {
  bool przestępny = czyPrzestępny(rok);
  cout << "W " << miesiąc << ". miesiącu roku " << rok << " jest "
       << dajLiczbęDniWMiesiącu(miesiąc, przestępny) << " dni." << endl;
  cout << "Rok " << rok << " ma " << dajLiczbęDniWRoku(rok) << " dni." << endl
       << endl;
}

void pobierzDane(void) {
    cout << "Podaj miesiąc i rok odzielone spacją > ";
    cin >> miesiąc >> rok; 
}

int main() {

  pobierzDane();
  wypiszLiczbeDniNaMiesiącRok(miesiąc, rok);
  main();
}