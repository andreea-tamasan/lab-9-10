

#include "Teste.h"
#include "Produs.h"
#include <cassert>
#include <cstring>
#include "Tonomat.h"
#include "Service.h"

void testProdus()
{
    Produs s1;
    assert(strcmp(s1.getnume(), "") == 0);
    assert(s1.getcod() == 0);

    Produs s2(1,"corn",50);
    assert(strcmp(s2.getnume(), "corn") == 0);
    assert(s2.getpret() == 50);

    s2.setnume("apa");
    assert(strcmp(s2.getnume(), "apa") == 0);
    s2.setcod(2);
    assert(s2.getcod() == 2);

}

void testRepo()
{
    Tonomat repo;
    assert(repo.getLength() == 0);

    Produs s1(1,"corn",50);
    repo.addElem(s1);
    assert(repo.getLength() == 1);
    assert(repo.getAll()[0] == s1);

    Produs s2(2,"ciucalata",30);
    repo.addElem(s2);
    assert(repo.getLength() == 2);
    assert(repo.getAll()[0] == s1);
    assert(repo.getAll()[1] == s2);
}
void testService()
{
    Service service;
    service.addProdus(2,"ciucalata",30);
    assert(service.numberOfEntitati()==1);
    service.addProdus(1,"corn",50);
    assert(service.numberOfEntitati()==2);
    service.removeEntitate(1,"corn",50);
    assert(service.numberOfEntitati()==1);



}