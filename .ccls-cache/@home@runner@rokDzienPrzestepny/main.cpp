#include <iostream>
using namespace std;

/*
Program oblicza liczbę dni w miesiącu i liczbę dni w roku dla podanego miesiąca
i roku. Użycie wypiszLiczbeDniNaMiesiącRok(int miesiąc, int rok). Np.
wypiszLiczbeDniNaMiesiącRok(2, 2020).
*/

class InterfejsUżytkownika {
    public: 
        void static pobierzDane(int &miesiąc, int &rok) {
            cout << "Podaj miesiąc i rok odzielone spacją > ";
            cin >> miesiąc >> rok; 
        }
    
        void static wypiszLiczbeDniNaMiesiącRok(const int miesiąc, 
                                         const int rok,
                                         const int liczbaDniWmies, 
                                         const int liczbaDniWroku) {
            cout << "W " << miesiąc << ". miesiącu roku " << rok << " jest "
                 << liczbaDniWmies << " dni." << endl;
            
            cout << "Rok " << rok << " ma " << liczbaDniWroku << " dni." << endl << endl;
        }
};

class LiczbaDniObliczenia {
    public: 
        int miesiąc;
        int rok;
        int liczbaDniWmies;
        int liczbaDniWroku;
        
    void wykonajObliczenia(void) {
            czyPrzestępny();
            ustawLiczbęDniWRoku();
            ustawLiczbęDniWMiesiącu();
        }
    
    private:
        bool czyRokPrzestępny;
        void czyPrzestępny(void) {
            this -> czyRokPrzestępny = ((this -> rok % 4 == 0 && this -> rok % 100 != 0) || 
                                         this -> rok % 400 == 0);
        }   
    
        void ustawLiczbęDniWRoku(void) { this -> liczbaDniWroku =  czyRokPrzestępny ? 366 : 365; }
    
        void ustawLiczbęDniWMiesiącu(void) {
            switch (this -> miesiąc) {
              case 1:
              case 3:
              case 5:
              case 7:
              case 8:
              case 10:
              case 12:
                  this -> liczbaDniWmies =  31;
              case 2:
                  this -> liczbaDniWmies = czyRokPrzestępny ? 29 : 28;
              default:
                  this -> liczbaDniWmies = 30;
            }  
        }
};


int main() {
    LiczbaDniObliczenia liczbaDniObl;
    InterfejsUżytkownika::pobierzDane(liczbaDniObl.miesiąc, liczbaDniObl.rok);
    liczbaDniObl.wykonajObliczenia();
    InterfejsUżytkownika::wypiszLiczbeDniNaMiesiącRok(liczbaDniObl.miesiąc,
                                                      liczbaDniObl.rok, 
                                                      liczbaDniObl.liczbaDniWmies, 
                                                      liczbaDniObl.liczbaDniWroku);
    main();
}