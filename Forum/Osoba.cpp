#include <iostream>
#include "Osoba.h"

int Osoba::instancje = 0;

Osoba::Osoba(){
    instancje++;
    id = 0;
    imie = "";
}
Osoba::Osoba(int kId, std::string kImie){
    instancje++;
    id = kId;
    imie = kImie;
}
Osoba::Osoba(Osoba& os){
    instancje++;
    id = os.id;
    imie = os.imie;
}

void Osoba::Przywitaj(std::string imiePrzywitanego){
    if(imie == ""){
        std::cout << "Brak danych" << std::endl;
        return;
    }
    std::cout << "Cześć " << imiePrzywitanego << ", mam na imię " << imie << std::endl;
}