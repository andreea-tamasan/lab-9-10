#ifndef LAB9_BANI_H
#define LAB9_BANI_H


class Bani {
private:
   int unban;
   int cincibani;
   int zecebani;
   int cinzecidebani;
public:
    Bani();
    Bani(int unban,int cincibani,int zecebani,int cinzecidebani);
    int getunban();
    int getcincibani();
    int getzecebani();
    int getcinzecidebani();
    void setunban(int unban);
    void setcincibani(int cincibani);
    void setzecebani(int zecebani);
    void setcinzecidebani(int cinzecidebani);

};


#endif //LAB9_BANI_H
