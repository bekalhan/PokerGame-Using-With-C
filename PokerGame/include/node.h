#ifndef NODE_H
#define NODE_H

#include "Kisi.h"
#include "nodezen.h"

struct node {
    char isim[20];
    float para;
    float oran;
    int sayi;
    int kontrol;
    int elenme_turu;
    struct node *next;

    void (*toString)();
    void (*DegerGuncelle)(int);
    void (*EnZenginBul)();
    int  (*ElenmeTuru)();    
};




void addNode(Kisi);
void toString();
void DegerGuncelle(int);
void EnZenginBul();
int ElenmeTuru();
struct node* Delete_Node();



#endif