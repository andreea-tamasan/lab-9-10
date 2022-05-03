
#include "RepoFile.h"
#include <cstring>
#include <fstream>
using namespace std;

RepoFile::RepoFile() = default;

RepoFile::RepoFile(const char *filename) {
    if (filename != NULL)
    {
        this->filename = new char[strlen(filename) + 1];
        strcpy_s(this->filename, strlen(filename) + 1, filename);
    }
    else
    {
        this->filename = NULL;
    }
    this->loadFromFile();
}

RepoFile::~RepoFile() {
    if (filename != NULL)
    {
        delete []this->filename;
        this->filename = NULL;
    }
}

void RepoFile::loadFromFile() {
    if (this->filename)
    {
        ifstream f(this->filename);
        char nume[20];
        int cod;
        int pret;
        while (!f.eof())
        {
            f >> cod >> nume>>pret;
            if (strlen(nume) > 0 || true)
            {
                Produs st(cod,nume,pret);
                this->addElem(st);
            }
        }
        f.close();
    }
}

void RepoFile::saveToFile() {
    if (this->filename)
    {
        ofstream f(this->filename);
        for (int i = 0; i < this->getLength();i++)
        {
            f << this->v[i] << endl;
        }
    }
}



bool RepoFile::find(Produs &s) {
    return Tonomat::find(s);
}


void RepoFile::addElem(const Produs &st) {
    Tonomat::addElem(st);
    this->saveToFile();
}

void RepoFile::deleteElem( Produs &st) {
    Tonomat::remove(st);
    this->saveToFile();
}

int RepoFile::getLength() {
    return Tonomat::getLength();
}

Produs *RepoFile::getAll() {
    return Tonomat::getAll();
}
