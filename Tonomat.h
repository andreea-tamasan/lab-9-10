
#ifndef LAB9_TONOMAT_H
#define LAB9_TONOMAT_H

#include "Bani.h"
#include "Produs.h"

class Tonomat {
private:
    int len;
protected:
    Produs v[100];
public:
    Tonomat();

    virtual void addElem(const Produs &st);

    virtual bool find(Produs &s);

    virtual int getLength();

    virtual Produs *getAll();

    void remove(Produs &s);
};


#endif //LAB9_TONOMAT_H
