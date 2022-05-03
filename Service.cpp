

#include "Service.h"
#include <iostream>
using namespace std;
Service::Service() {
    this->repo= NULL;
};

void Service::addProdus(int cod, const char *nume, int pret) {
    Produs p;
    p = Produs(cod, nume, pret);
    this->repo.addElem(p);
}

int Service::searchProdus(int cod, const char *nume, int pret) {
    Produs e;
    e = Produs(cod, nume, pret);
    return this->repo.find(e);
}

void Service::removeEntitate(int cod, const char *nume, int pret) {
    Produs e = Produs(cod, nume, pret);
    this->repo.deleteElem(e);
}

int Service::numberOfEntitati() {
    return this->repo.getLength();
}

Produs *Service::getAll() {
    return this->repo.getAll();
}

int Service::achizitionare(int cod, const char *nume, int pret, int s) {
    if (searchProdus(cod, nume, pret)) {
        int rest = s - pret;
        int sum =rest;

        int can_50 = min(sum / 50, this->bani.getcinzecidebani());
        this->bani.setcinzecidebani(this->bani.getcinzecidebani()-can_50);
        sum -= can_50 * 50;

        int can_10 = min(sum / 10, this->bani.getzecebani());
        this->bani.setzecebani(this->bani.getzecebani()-can_10);
        sum -= can_10 * 10;

        int can_5 = min(sum / 5, this->bani.getcincibani());
        this->bani.setcincibani(this->bani.getcincibani()-can_5);
        sum -= can_5 * 5;

        int can_1 = min(sum / 1, this->bani.getunban());
        this->bani.setunban(this->bani.getunban()-can_1);
        sum -= can_1 * 1;

        if (sum == 0)
        {
            cout << "Aparatu da rest, bravo! ";
            return rest;
        }
        else
        {
            cout << "Aparatu nu da rest, cry about it";
            return 0;
        }


    }
    else return 0;
}

Service::Service( const RepoFile& repo) {
this->repo=repo;
}

