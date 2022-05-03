
#ifndef LAB9_SERVICE_H
#define LAB9_SERVICE_H

#include "Tonomat.h"
#include "Bani.h"
#include "RepoFile.h"
class Service {
private:
RepoFile repo;
Bani bani= Bani(12,3,5,9);

public:
    Service();
    Service( const RepoFile& repo);
    void addProdus(int cod , const char *nume, int pret);
    int searchProdus(int cod , const char *nume, int pret);
    void removeEntitate(int cod , const char *nume, int pret);
    int numberOfEntitati();
    Produs *getAll();
    int achizitionare(int cod, const char *nume,int pret,int s);

};


#endif //LAB9_SERVICE_H
