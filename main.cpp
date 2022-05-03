#include <iostream>
#include "UI.h"
#include "Teste.h"
#include "Bani.h"
#include "Produse.txt"
using namespace std;
int main() {
    testProdus();
    testRepo();
    testService();
    RepoFile repo("Produsee.txt");
    UI meiu=UI();
    meiu.runMenu();
    return 0;
}
