#ifndef NODEOYUN_H
#define NODEOYUN_H

#include "Kisi.h"

struct nodeOyun {
    int sansli_sayi;
    int tur;
    float masa_parasi;
    struct nodeOyun *next;

    void (*addNodeOyun)(int,int,float);
    void (*OyunDegerGuncelle)(int,int,float);
    void (*toString)();
};



void addNodeOyun(int,int,float);
void OyunDegerGuncelle(int,int,float);
void toString();
struct nodeOyun* GetNodeOyun();
struct nodeOyun* Delete_nodeOyun();




#endif