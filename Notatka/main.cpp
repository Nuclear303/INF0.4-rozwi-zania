#include <iostream>
#include "Notatka.h"

void test(){
    Notatka* notatka1 = new Notatka("Pierwsza notatka", "To jest moja pierwsza notatka!");
    std::cout << "Wyświetlenie pierwszej notatki: " << std::endl;
    notatka1->DisplayNote();
    std::cout << "Wyświetlenie diagnostyki pierwszej notatki: " << std::endl;
    notatka1->Diagnostics();
    Notatka* notatka2 = new Notatka("Lista zakupów", "Kupić chleb.");
    std::cout << "Wyświetlenie drugiej notatki: " << std::endl;
    notatka2->DisplayNote();
    std::cout << "Wyświetlenie diagnostyki drugiej notatki: " << std::endl;
    notatka2->Diagnostics();
}

int main(void){
    setlocale(LC_ALL, "pl_PL");
    test();
    return 0;
}

