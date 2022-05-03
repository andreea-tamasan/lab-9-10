
#ifndef LAB9_PRODUS_H
#define LAB9_PRODUS_H
#include <ostream>
using namespace std;


class Produs {
    
    private:
        int cod;
        int pret;
        char *nume;
    public:
        Produs();

        Produs(int cod, const char *nume, int pret);

        Produs(const Produs &st);

        ~Produs();

        int getcod();

        int getpret();

        char *getnume();

        void setcod(int cod);

        void setpret(int pret);

        void setnume(const char *nume);

        Produs &operator=(const Produs &st);

        bool operator==(const Produs &st) const;

        friend ostream &operator<<(ostream &os, const Produs &st);

    
};


#endif //LAB9_PRODUS_H
