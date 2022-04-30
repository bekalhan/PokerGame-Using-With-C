#include "node.h"
#include "Oyun.h"
#include "nodeoyun.h"
#include "nodezen.h"
#include "Kisi.h"

int tur =0;


struct node *head = NULL;
struct node *tail = NULL;


void addNode(Kisi k1){
      // Linked List is empty
    if(head == NULL){
        struct node *ptr = (struct node*)malloc(sizeof(struct node));
        strcpy(ptr->isim,k1->isim);
        ptr->para = k1->para;
        ptr->oran = k1->oran;
        ptr->sayi = k1->sayi;
        ptr->kontrol = k1->kontrol;
        ptr->elenme_turu = k1->elenme_turu;
        ptr->toString = &toString;
        ptr->DegerGuncelle = &DegerGuncelle;
        ptr->EnZenginBul = &EnZenginBul;
        ptr->ElenmeTuru = &ElenmeTuru;


        ptr->next = NULL;
        head =tail = ptr;
    }else{
        struct node *ptr = (struct node*)malloc(sizeof(struct node));
         strcpy(ptr->isim,k1->isim);
        ptr->para = k1->para;
        ptr->oran = k1->oran;
        ptr->sayi = k1->sayi;
        ptr->kontrol = k1->kontrol;
        ptr->elenme_turu = k1->elenme_turu;
         ptr->toString = &toString;
        ptr->DegerGuncelle = &DegerGuncelle;
        ptr->EnZenginBul = &EnZenginBul;
        ptr->ElenmeTuru = &ElenmeTuru;

        ptr->next = NULL;
        tail->next = ptr;
        tail = ptr;
    }
}


void PrintNode(){
    struct node *index = head;
    while(index!=NULL){
        index = index->next;
    }
}


void DegerGuncelle(int sayi){
    tur++;
    struct node *index = head;
    float masa_parasi=0;
    float yenipara=0;
    float kazanilan_para =0;
    float kalan_para = 0;
    while(index!=NULL){
        if(index->kontrol==0){
      
            if(index->sayi==sayi){
            yenipara = index->para*index->oran; 
            kalan_para = index->para - yenipara;
            yenipara = yenipara * 10;
            kazanilan_para = kalan_para + yenipara; 
            masa_parasi = masa_parasi - (kazanilan_para-index->para);
            index->para=kazanilan_para;
        }else{
            yenipara = index->para*index->oran; 
            kalan_para = index->para - yenipara; 
            masa_parasi = masa_parasi + (index->para-kalan_para);
            index->para = kalan_para;
        }

            if(index->para<1000){
            index->kontrol = 1;
            index->para = -1;
            index->elenme_turu = tur;
       
            }
            
        }
        
        index = index->next;
    }
    OyunDegerGuncelle(sayi,tur,masa_parasi);

}

void EnZenginBul(){
    struct node *index = head;
    char isim[30];
    float encokpara=0;
    while(index!=NULL){
        if(index->para>encokpara){
            encokpara = index->para;
            strcpy(isim,index->isim);
        }
        index = index->next;
    }
    addZenginler(isim,encokpara);
}


int ElenmeTuru(){
    struct node *index = head;
    int en_buyuk_tur=0;
    while(index!=NULL){
        if(index->elenme_turu>en_buyuk_tur){
            en_buyuk_tur = index->elenme_turu;
        }
        index = index->next;
    }
    return en_buyuk_tur;
}

struct node* Delete_Node(){
    struct node* temp = head;

    while(temp !=NULL){
        struct node* temp2 = temp;
        temp = temp->next;
        free(temp2);
    }
    temp = NULL;
}
