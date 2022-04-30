#include "Dosya.h"
#include "Kisi.h"
#include "Oyun.h"

Dosya new_Dosya(char* dosya_adix,int karakter_sayisix){
    Dosya dosya; 
    dosya = (Dosya)malloc(sizeof(struct DOSYA));
    dosya->dosya_adi = dosya_adix;
    dosya->karakter_sayisi = karakter_sayisix;
    dosya->DosyaKisiOku = &DosyaKisiOku;
    dosya->DosyaSayiOku = &DosyaSayiOku;
    dosya->Delete_Dosya = &Delete_Dosya;
    return dosya;
}

void DosyaKisiOku(char* dosya_adix,int karakter_sayisix){
    Kisi k1;
   char metin[50];
    char ayrac[] = "#";
    char *ptr;
    char *ptr2;
    char *ptr3;
    char *ptr4;
     
    char *satir;
    FILE *dosya;
    if((dosya=fopen("./Kisiler.txt","r"))!=NULL){
    while(!feof(dosya)){
        if( fgets(satir,karakter_sayisix,dosya)){
            strcpy(metin,satir);
            ptr = strtok(metin,ayrac);
            ptr2 = strtok(NULL,ayrac);
            ptr3 =  strtok(NULL,ayrac);
            ptr4 = strtok(NULL,ayrac);       
            KisiBilgileriGonder(ptr,ptr2,ptr3,ptr4);
            }
        }
    }else{
        printf("Kisiler dosyasi bulunamadi");
    }
}

void DosyaSayiOku(char* dosya_adix,int karakter_sayisix){
 int sayi_al;
 char dosya_ad_al[30];
 strcpy(dosya_ad_al,dosya_adix);
    char *satir;
    FILE *dosya;
    if((dosya=fopen("./Sayilar.txt","r"))!=NULL){
           while(!feof(dosya)){
        if(fgets(satir,10,dosya)){
            sayi_al = atoi(satir);
            OyunBilgileriGonder(sayi_al);
        }
    }
    }else{
        printf("Sayilar dosyasi bulunamadi");
    }
 
}

void Delete_Dosya(const Dosya dosya){
    if(dosya == NULL) return;
    free(dosya);
}
