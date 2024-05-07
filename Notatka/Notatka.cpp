#include <iostream>
#include "Notatka.h"

int Notatka::counter = 0;
Notatka::Notatka(std::string inTitle, std::string inContent){
    ++counter;
    id = counter;
    title = inTitle;
    content = inContent;
}

void Notatka::DisplayNote(){
    std::cout << "Tytuł: " << title << std::endl;
    std::cout << "Treść: " << content << std::endl;
}

void Notatka::Diagnostics(){
    std::cout << "Licznik instancji: " << counter << std::endl;
    std::cout << "Identyfikator: " << id << std::endl;
    std::cout << "Tytuł: " << title << std::endl;
    std::cout << "Treść: " << content << std::endl;
}