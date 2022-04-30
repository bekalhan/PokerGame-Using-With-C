#ifndef KISI_H
#define KISI_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>



struct KISI{
    char* isim;
    float para;
    float oran;
    int sayi;
    int kontrol;
    int elenme_turu;

    void (*clrscr)();
    void (*KisiBilgileriGonder)(char*,char*,char*,char*);
    void (*Delete_Kisi)(struct KISI*);
};

typedef struct KISI* Kisi;

Kisi new_Kisi(char*,char*,char*,char*);
void clrscr();
void KisiBilgileriGonder(char*,char*,char*,char*);
void Delete_Kisi(const Kisi);

#endif