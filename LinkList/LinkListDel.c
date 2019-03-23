//
// Created by rqsir on 19-3-20.
//

#include "LinkListDel.h"

Status LinkListDelByValue(LinkList L,ElemType e){

    LinkList p = L;

    while(p && p->next){
        if(p->next->data == e){
            LinkList elemDel = p->next;
            p->next = p->next->next;
            L->data--;
            free(elemDel);
            return OK;
        }
        p = p->next;
    }

    printf("\nDELETE ERROR!!!");
    return ERROR;
}

Status LinkListDelByPosition(LinkList L,int i,ElemType *e){

    LinkList p = L;
    int j = 0;

    while(p && j<i-1){
        j++;
        p = p->next;
    }

    if(j != i-1 || p->next == NULL){
        printf("\nDELETE ERROR!!!");
        return ERROR;
    }

    LinkList elemDel = p->next;
    p->next = p->next->next;
    L->data--;
    *e = elemDel->data;
    free(elemDel);

    return OK;
}
