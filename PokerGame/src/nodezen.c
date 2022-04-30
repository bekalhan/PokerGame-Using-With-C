#include "nodezen.h"

struct EnZenginler *headzen = NULL;
struct EnZenginler *tailzen = NULL;

void addZenginler(char *isim,float para){
    if(headzen == NULL){
        struct EnZenginler *ptr = (struct EnZenginler*)malloc(sizeof(struct EnZenginler));
        strcpy(ptr->isim,isim);
        ptr->para = para;
        ptr->addZenginler = &addZenginler;

        ptr->next = NULL;
        headzen =tailzen = ptr;
    }else{
        struct EnZenginler *ptr = (struct EnZenginler*)malloc(sizeof(struct EnZenginler));
        strcpy(ptr->isim,isim);
        ptr->para = para;
        ptr->addZenginler = &addZenginler;
        ptr->next = NULL;

        tailzen->next = ptr;
        tailzen = ptr;
    }
}

struct EnZenginler* GetNodeZen(){
    return headzen;
}

struct EnZenginler* Delete_Zen(){
    struct EnZenginler* temp = GetNodeZen();

      while(temp !=NULL){
        struct EnZenginler* temp2 = temp;
        temp = temp->next;
        free(temp2);
    }
    temp = NULL;

}
