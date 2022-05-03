
#include "Tonomat.h"

Tonomat::Tonomat() {
this->len=0;
}

Produs *Tonomat::getAll() {
    return this->v;
}

int Tonomat::getLength() {
    return this->len;
}

void Tonomat::addElem(const Produs &st) {
    if (this->len == 100) {
        return;
    }
    this->v[this->len] = st;
    this->len++;
}

bool Tonomat::find(Produs &s) {
    for (int i = 0; i < len; i++) {
        if (v[i] == s)
            return true;
    }
    return false;
}

void Tonomat::remove(Produs &s) {
    int j, ok = 0;
    for (int i = 0; i < len; i++)
        if (v[i] == s) {
            j = i;
            ok = 1;
            break;

        }
    if (ok == 1)
        for (int k = j; k < len; k++) {
            v[k] = v[k + 1];
            len--;
        }
}
