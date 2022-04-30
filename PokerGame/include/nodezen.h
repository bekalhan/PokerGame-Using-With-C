#ifndef NODEZEN_H
#define NODEZEN_H

#include "Kisi.h"
#include "Oyun.h"

struct EnZenginler {
    char isim[30];
    float para;
    struct EnZenginler *next;

    void (*addZenginler)(char*,float);
};

void addZenginler(char*,float);
struct EnZenginler* GetNodeZen();
struct EnZenginler* Delete_Zen();



#endif