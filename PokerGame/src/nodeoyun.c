#include "nodeoyun.h"
#include "Kisi.h"

struct nodeOyun *headoyun = NULL;
struct nodeOyun *tailoyun = NULL;

void addNodeOyun(int sansli_sayi,int tur_sayisi,float masa_parasi){
      // Linked List is empty
    if(headoyun == NULL){
        struct nodeOyun *ptr = (struct nodeOyun*)malloc(sizeof(struct nodeOyun));
        ptr->sansli_sayi = sansli_sayi;
        ptr->tur = tur_sayisi;
        ptr->masa_parasi = masa_parasi;
        ptr->addNodeOyun = &addNodeOyun;
        ptr->OyunDegerGuncelle = &OyunDegerGuncelle;
        ptr->toString = &toString;

        ptr->next = NULL;
        headoyun =tailoyun = ptr;
    }else{
        struct nodeOyun *ptr = (struct nodeOyun*)malloc(sizeof(struct nodeOyun));
        ptr->sansli_sayi = sansli_sayi;
        ptr->tur = tur_sayisi;
        ptr->masa_parasi = masa_parasi;
        ptr->addNodeOyun = &addNodeOyun;
        ptr->OyunDegerGuncelle = &OyunDegerGuncelle;
        ptr->toString = &toString;
        ptr->next = NULL;

        tailoyun->next = ptr;
        tailoyun = ptr;
    }
}

void OyunDegerGuncelle(int sansli_sayi,int tur_sayisi,float masa_parasi){
        struct nodeOyun *index = headoyun;
        float masada_olan_para=0;
        while(index!=NULL){
            if(index->next==NULL){
                masada_olan_para = index->masa_parasi;
            }
            index = index->next;
        }
        masada_olan_para = masada_olan_para+masa_parasi;
        addNodeOyun(sansli_sayi,tur_sayisi,masada_olan_para);

}

void toString(){
    struct nodeOyun *index = headoyun;
    printf("***KUYRUK OYUN***");
    while(index!=NULL){
        printf("girdi");
        printf("oyun turu : %d  oyun sansli sayisi : %d oyun masa parasi : %f \n",index->tur,index->sansli_sayi,index->masa_parasi);
        index = index->next;
    }
}

struct nodeOyun* GetNodeOyun(){
    return headoyun;
}

struct nodeOyun* Delete_nodeOyun(){
    struct nodeOyun* temp = GetNodeOyun();

    while(temp !=NULL){
        struct nodeOyun* temp2 = temp;
        temp = temp->next;
        free(temp2);
    }
    temp = NULL;
}
