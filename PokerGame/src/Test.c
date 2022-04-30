#include "node.h"
#include "Dosya.h"
#include "Oyun.h"
#include "nodeoyun.h"
#include "nodezen.h"


int main(int argc, char *argv[]){
    Oyun o1 = new_Oyun();

    char *ptr;
    char *ptr2;
    char isim[30]="Kisiler.txt";
    char isim2[30]="Sayilar.txt";
    ptr = isim;
    ptr2 = isim2;

    printf("calisti \n");
    Dosya d1 = new_Dosya(ptr,100);
    printf(".\n");
    DosyaKisiOku(d1->dosya_adi,d1->karakter_sayisi);  

    Dosya d2 = new_Dosya(ptr2,10);
    printf(".\n");
    DosyaSayiOku(d2->dosya_adi,d2->karakter_sayisi);

    int satir_al = ElenmeTuru();
    int i;

    struct EnZenginler* index = GetNodeZen();
    struct nodeOyun* index2=GetNodeOyun();    
    index2 = index2->next;

    for(i=0;i<satir_al-1;i++){

        printf("\t \t \t ############################################# \n");
        printf("\t \t \t ## \t \tSANSLI SAYI: %d\t \t    ##\n",index2->sansli_sayi);
        printf("\t \t \t ############################################# \n");
        printf("\t \t \t ############################################# \n");
        printf("\t \t \t ## \t \t   TUR: %d \t\t    ##\n",index2->tur);
        printf("\t \t \t ## \t  MASA BAKIYE: %f\t    ##\n",index2->masa_parasi);
        printf("\t \t \t ## \t\t\t \t\t    ##\n");
        printf("\t \t \t ## ----------------------------------------##\n");
        printf("\t \t \t ##\t\tEN ZENGIN KISI \t\t    ##\n");
        printf("\t \t \t ## \t \t %s \t    ##\n",index->isim);
        printf("\t \t \t ##  BAKIYESI: %f \t\t    ##\n",index->para);
        printf("\t \t \t ## \t\t\t \t\t    ##\n");
        printf("\t \t \t ############################################# \n");
        clrscr();
        index = index->next;
        index2 = index2->next;
    }   
  

     printf("\t \t \t ############################################# \n");
        printf("\t \t \t ## \t \t   TUR: %d \t\t    ##\n",index2->tur);
        printf("\t \t \t ## \t  MASA BAKIYE: %f\t    ##\n",index2->masa_parasi);
        printf("\t \t \t ## \t\t\t \t\t    ##\n");
        printf("\t \t \t ## ----------------------------------------##\n");
        printf("\t \t \t ##\t\tOYUN BITTI   \t\t    ##\n");
        printf("\t \t \t ## \t\t\t \t\t    ##\n");
        printf("\t \t \t ## \t\t\t \t\t    ##\n");
        printf("\t \t \t ## \t\t\t \t\t    ##\n");
        printf("\t \t \t ############################################# \n"); 

    Delete_Zen();
    Delete_nodeOyun();
    Delete_Node();


    o1->Delete_Oyun(o1);
    d1->Delete_Dosya(d1);
    d2->Delete_Dosya(d2);

    return 0;
}