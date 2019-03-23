//
// Created by rqsir on 19-3-20.
//

#include "LinkListCreateByHead.h"

Status LinkListCreateByHead(LinkList *L,int elemNum){

    srand(time(0));

    *L = (LinkList)malloc(sizeof(Node));
    (*L)->data = elemNum;
    (*L)->next = NULL;
    LinkList p = NULL;

    for(int i=0; i<elemNum; i++){
        p = (LinkList)malloc(sizeof(Node));
        p->next = (*L)->next;
//        p->data = i;
        p->data = rand()%100 + 1;
        (*L)->next = p;
    }

}