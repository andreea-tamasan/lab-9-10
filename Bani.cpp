#include "Bani.h"

Bani::Bani() {
    this->unban =0;
    this->cincibani=0;
    this->zecebani=0;
    this->cinzecidebani=0;
}

Bani::Bani(int unban, int cincibani, int zecebani, int cinzecidebani) {
    this->unban =unban;
    this->cincibani=cincibani;
    this->zecebani=zecebani;
    this->cinzecidebani=cinzecidebani;
}

int Bani::getunban() {

    return this->unban;
}

int Bani::getcincibani() {
    return this->cincibani;
}

int Bani::getzecebani() {
    return this->zecebani;
}

int Bani::getcinzecidebani() {
    return 0;
}

void Bani::setunban(int unban) {
    this->unban=unban;

}

void Bani::setcincibani(int cincibani) {
this->cincibani=cincibani;
}

void Bani::setzecebani(int zecebani) {
this->zecebani=zecebani;
}

void Bani::setcinzecidebani(int cinzecidebani) {
this->cinzecidebani=cinzecidebani;
}

