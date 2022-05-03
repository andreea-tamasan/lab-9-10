
#include "Produs.h"
#include <cstdlib>
#include <cstring>

Produs::Produs() {
    this->cod = 0;
    this->pret = 0;
    this->nume = new char[1];
    strcpy_s(this->nume, 1, "");
}

Produs::Produs(int cod, const char *nume, int pret ) {
    this->cod = cod;
    this->pret = pret;
    if (nume == NULL) {
        this->nume = NULL;
    } else {
        this->nume = new char[strlen(nume) + 1];
        strcpy_s(this->nume, strlen(nume) + 1, nume);
    }
}

Produs::Produs(const Produs &st) {
    if (st.nume == NULL) {
        this->nume = NULL;
    } else {
        this->nume = new char[strlen(st.nume) + 1];
        strcpy_s(this->nume, strlen(st.nume) + 1, st.nume);
    }
    this->cod = st.cod;
    this->pret = st.pret;
}

Produs::~Produs() {
    if (this->nume) {
        delete[] this->nume;
    }
}

int Produs::getcod() {
    return this->cod;
}

int Produs::getpret() {
    return this->pret;
}

char *Produs::getnume() {
    return this->nume;
}

void Produs::setcod(int cod) {
    this->cod = cod;
}

void Produs::setpret(int pret) {
    this->pret = pret;
}

void Produs::setnume(const char *nume) {
    if (nume == NULL) {
        this->nume = NULL;
    } else {
        this->nume = new char[strlen(nume) + 1];
        strcpy_s(this->nume, strlen(nume) + 1, nume);
    }
}

Produs &Produs::operator=(const Produs &st) {
    if (this != &st) {
        this->setcod(st.cod);
        this->setpret(st.pret);
        this->setnume(st.nume);
    }
    return *this;
}

bool Produs::operator==(const Produs &st) const {
    return strcmp(this->nume, st.nume) == 0 && this->cod == st.cod && this->pret == st.pret;
}

ostream &operator<<(ostream &os, const Produs &st) {
    if (st.nume == NULL) {
        os << "NULL ";
    } else {
        os << st.nume << " ";
    }
    os << st.cod<<" ";
    os << st.pret<<" ";
    return os;
}