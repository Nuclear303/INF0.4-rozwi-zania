#include <iostream>
#include "../Forum/Osoba.h"

int main(void){
    setlocale(LC_ALL, "pl-PL");
    std::cout << Osoba::instancje << std::endl;
    Osoba* os1 = new Osoba();
    os1->Przywitaj("Oliwier");
    Osoba* os2 = new Osoba(3, "Magie Digga");
    os2->Przywitaj("Oliwier");
    Osoba* os3 = new Osoba(*os2);
    os3->Przywitaj("Oliwier");
    std::cout << Osoba::instancje << std::endl;

    return 0;
}