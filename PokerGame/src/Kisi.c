#include "Kisi.h"
#include "node.h"


Kisi new_Kisi(char* isimx,char* parax,char* oranx,char* sayix){
    Kisi kisi; 
    // memory alloc ile dinamik bellekten yer ayrýmý
    kisi = (Kisi)malloc(sizeof(struct KISI));

    int para = atoi(parax);
    float oran = atof(oranx);
    int sayi = atoi(sayix);

    kisi->isim = isimx;
    kisi->para = para;
    kisi->oran = oran;
    kisi->sayi = sayi;
    kisi->kontrol = 0;
    kisi->elenme_turu =0;
    kisi->clrscr = &clrscr;
    kisi->KisiBilgileriGonder = &KisiBilgileriGonder;
    kisi->Delete_Kisi = &Delete_Kisi;
    // eklediðimiz kisilerin bilgilerini node'a ekleme
    addNode(kisi);
    return kisi;
}

void clrscr()
{
    system("@cls||clear");
}


void Delete_Kisi(const Kisi kisi){
    if(kisi == NULL) return;
    free(kisi);
}

void KisiBilgileriGonder(char *isimy,char *paray,char *orany,char *sayiy){
    Kisi k1 = new_Kisi(isimy,paray,orany,sayiy);  
    k1->Delete_Kisi(k1);
}

