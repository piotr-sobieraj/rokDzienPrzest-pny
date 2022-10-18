#pragma once

class liczbaDniObliczenia {
    public: 
        int miesiąc;
        int rok;
        int liczbaDniWmies;
        int liczbaDniWroku;
        
    void wykonajObliczenia(void);
    
    private:
        bool czyRokPrzestępny;
        void czyPrzestępny(void);
        void ustawLiczbęDniWRoku(void);
        void ustawLiczbęDniWMiesiącu(void);     
};


void liczbaDniObliczenia::wykonajObliczenia(void) {
    czyPrzestępny();
    ustawLiczbęDniWRoku();
    ustawLiczbęDniWMiesiącu();
}


void liczbaDniObliczenia::czyPrzestępny(void) {
    this -> czyRokPrzestępny = ((this -> rok % 4 == 0 && this -> rok % 100 != 0) || 
                                 this -> rok % 400 == 0);
}


void liczbaDniObliczenia::ustawLiczbęDniWRoku(void) { this -> liczbaDniWroku =  czyRokPrzestępny ? 366 : 365; }


void liczbaDniObliczenia::ustawLiczbęDniWMiesiącu(void) {
    switch (this -> miesiąc) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            this -> liczbaDniWmies =  31;
            break;
        case 2:
            this -> liczbaDniWmies = czyRokPrzestępny ? 29 : 28;
            break;
        default:
            this -> liczbaDniWmies = 30;
    }  
}