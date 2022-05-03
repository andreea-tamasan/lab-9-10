#ifndef LAB9_UI_H
#define LAB9_UI_H

#include "Service.h"

class UI {
private:
    Service service;
public:
    UI();

    UI(const Service &service);

    void runMenu();

    void addProdus();

    void removeProdus();

    void numberOfProduse();

    void getAllProduse();

    void achizitionare();
};


#endif //LAB9_UI_H
