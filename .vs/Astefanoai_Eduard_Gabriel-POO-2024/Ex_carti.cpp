#include "pch.h"
#include <iostream>
using namespace System;
using namespace std;

struct Carte{
    unsigned ap;
    char autor[20];
    char titlu[20];
    int vechime; // Format 2024-anul aparitiei(ap)
};

class Cartea {
private:
    unsigned ap;
    char autor[20];
    char titlu[20];
    int vechime;
public:
    Cartea(unsigned ap1, char* aut1, char* tit1, int vec1) {
        ap = ap1;
        strcpy_s(autor, 20, aut1);
        strcpy_s(titlu, 20, tit1);
        vechime = vec1;
    }
    Cartea() {}
    unsigned arata_ap() { return this->ap; }
    char* arata_autor() { return this->autor; }
    char* arata_titlu() { return this->titlu; }
    int arata_vechime() { return this->vechime; }
};


int main()
{
    Console::WriteLine("Introduceti numarul de carti: ");
    int nr_carti;
    cin >> nr_carti;
    Carte* cartile = new Carte[nr_carti];
    for (int i = 0;i < nr_carti;i++) {
        Console::WriteLine("Introduceti titlul cartii {0}: ", i + 1);
        char titlu[20];
        cin >> titlu;
        strcpy_s(cartile[i].titlu, 20, titlu);

        Console::WriteLine("Introduceti autorul cartii {0}: ", i + 1);
        char autor[20];
        cin >> autor;
        strcpy_s(cartile[i].autor, 20, autor);

        Console::WriteLine("Introduceti anul aparitiei {0}: ", i + 1);
        unsigned ap;
        cin >> ap;
        cartile[i].ap = ap;

        cartile[i].vechime = 2024 - ap;
    }
    Console::WriteLine("Afisam toata biblioteca si vechimea cartilor: ");
    for (int i = 0;i < nr_carti; i++) {
        cout << cartile[i].titlu << " scrisa de " << cartile[i].autor << " in anul " << cartile[i].ap << "\t" << "vechime: " << cartile[i].vechime << endl;
    }

    Console::ReadKey();
    return 0;
}
