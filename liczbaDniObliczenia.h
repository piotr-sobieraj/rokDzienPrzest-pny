class liczbaDniObliczenia {
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