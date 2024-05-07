#include <string>

class Notatka{
    private:
        static int counter;
        int id;
    protected:
        std::string title, content;
    public:
        Notatka(std::string, std::string);
        void DisplayNote();
        void Diagnostics();
};