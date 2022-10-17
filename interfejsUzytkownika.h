#include<iostream>
using namespace std;

class interfejsUżytkownika {
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