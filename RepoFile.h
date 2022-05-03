#ifndef LAB9_REPOFILE_H
#define LAB9_REPOFILE_H
#include "Tonomat.h"

class RepoFile: public Tonomat{
private:
    char *filename;

public:
    RepoFile();
    RepoFile(const char* filename);
    ~RepoFile();
    bool find(Produs &s);
    void addElem(const Produs& st);
    void deleteElem( Produs& st);
    int getLength();
    Produs *getAll();
    void loadFromFile();
    void saveToFile();
};


#endif //LAB9_REPOFILE_H
