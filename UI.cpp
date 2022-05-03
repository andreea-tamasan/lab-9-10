#include "UI.h"
#include <iostream>

using namespace std;

UI::UI() {

}

void UI::runMenu() {

    int optiune;
    do {
        cout << "1. Adaugare produs" << endl;
        cout << "2. Stergere produs" << endl;
        cout << "3. Numarul de produse" << endl;
        cout << "4. Afisare toate produsele" << endl;
        cout << "5.Achizitionare produs" << endl;
        cout << "0. Iesire" << endl;

        cout << "Dati optiunea: ";
        cin >> optiune;
        switch (optiune) {
            case 1: {
                addProdus();
                break;
            }
            case 2: {
                removeProdus();
                break;
            }
            case 3: {
                numberOfProduse();
                break;
            }
            case 4: {
                getAllProduse();
                break;
            }
            case 5: {
                achizitionare();
                break;
            }

        }
    } while (optiune != 0);
}

void UI::addProdus() {

    int cod;
    int pret;
    cout << "Dati codul produsului: ";
    cin >> cod;
    cout << "Dati pretul: ";
    cin >> pret;
    cout << "Dati numele produsului: ";
    char *nume = new char[15];
    cin >> nume;
    this->service.addProdus(cod, nume, pret);
    delete[] nume;
}

void UI::removeProdus() {
    int cod;
    int pret;
    cout << "Dati codul produsului de sters: ";
    cin >> cod;
    cout << "Dati pretul de sters : ";
    cin >> pret;
    cout << "Dati numele produsului de sters: ";
    char *nume = new char[15];
    cin >> nume;
    this->service.removeEntitate(cod, nume, pret);
    delete[] nume;
}

void UI::numberOfProduse() {
    cout << "Numarul produselo este: " << this->service.numberOfEntitati() << endl;
}

void UI::getAllProduse() {
    cout << "Toate produsele sunt: " << endl;
    for (int i = 0; i < this->service.numberOfEntitati(); i++)
        cout << this->service.getAll()[i] << " " << endl;
}

void UI::achizitionare() {
    int s;
    int cod;
    int pret;
    cout << "Dati codul produsului de achizitionat: ";
    cin >> cod;
    cout << "Dati pretul de achizitionat : ";
    cin >> pret;
    cout << "Dati numele produsului de achizitionat: ";
    char *nume = new char[15];
    cin >> nume;
    cout << "Dati suma de bani: ";
    cin >> s;
    cout<<" "<<this->service.achizitionare(cod, nume, pret, s)<<" "<<endl;
    delete[] nume;
}

UI::UI(const Service &service) {
    this->service=service;
}
