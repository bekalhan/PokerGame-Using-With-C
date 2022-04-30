#ifndef DOSYA_H
#define DOSYA_H

#include "Kisi.h"

struct DOSYA{
    char* dosya_adi;
    int karakter_sayisi;

    void (*DosyaKisiOku)(char*,int);
    void (*DosyaSayiOku)(char*,int);
    void (*Delete_Dosya)(struct DOSYA*);
};

typedef struct DOSYA* Dosya;

Dosya new_Dosya(char*,int);
void DosyaKisiOku(char*,int);
void DosyaSayiOku(char*,int);
void Delete_Dosya(const Dosya);

#endif