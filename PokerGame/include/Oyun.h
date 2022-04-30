#ifndef OYUN_H
#define OYUN_H

#include "Kisi.h"

struct OYUN{
    int sansli_sayi;
    int tur;
    float masa_parasi;

    void (*OyunBilgileriGonder)(int);
    void (*Delete_Oyun)(struct OYUN*);
};

typedef struct OYUN* Oyun;

Oyun new_Oyun();
void OyunBilgileriGonder(int);
void Delete_Oyun(const Oyun);

#endif