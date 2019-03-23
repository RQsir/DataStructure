//
// Created by rqsir on 19-3-19.
//

#include "LinkListInsert.h"

Status LinkListInsert(LinkList L,int i,ElemType e){
    LinkList p = L;

    LinkList newNode = (LinkList)malloc(sizeof(Node));
    newNode->data = e;
    p->data++;

    int j=1;
    while (j<i && p->next){
        p = p->next;
        j++;
    }

    newNode->next = p->next;
    p->next = newNode;

    return OK;
}
