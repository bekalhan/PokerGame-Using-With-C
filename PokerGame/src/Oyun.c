#include "Oyun.h"
#include "nodeoyun.h"
#include "node.h"
#include "nodezen.h"

Oyun new_Oyun(){
    char *stopstring;
    Oyun oyun; 
    // memory alloc ile dinamik bellekten yer ayrýmý
    oyun = (Oyun)malloc(sizeof(struct OYUN));
    oyun->masa_parasi = 0;
    oyun->tur = 0;
    oyun->sansli_sayi = -1;
    oyun->OyunBilgileriGonder = &OyunBilgileriGonder;
    oyun->Delete_Oyun = &Delete_Oyun;
    addNodeOyun(oyun->sansli_sayi,oyun->tur,oyun->masa_parasi);
    return oyun;
}

void OyunBilgileriGonder(int sayi){
    DegerGuncelle(sayi);
    EnZenginBul();
}

void Delete_Oyun(const Oyun oyun){
    if(oyun==NULL) return;
    free(oyun);
}