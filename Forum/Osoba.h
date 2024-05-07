#include <iostream>
#pragma once
class Osoba{
    private:
        int id;
        std::string imie;
    public:
        static int instancje;
        Osoba();
        Osoba(int, std::string);
        Osoba(Osoba&);
        void Przywitaj(std::string);
};

