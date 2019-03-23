//
// Created by rqsir on 19-3-21.
//

#include "LinkListCreateByTail.h"

Status LinkListCreateByTail(LinkList *L,int ElemNum){

    *L = (LinkList)malloc(sizeof(Node));
    (*L)->data = ElemNum;
    (*L)->next = NULL;

    LinkList currentP = *L;

    for(int i=0; i<ElemNum; i++){
        LinkList NewNode;
        NewNode = (LinkList)malloc(sizeof(Node));
        NewNode->data = i;
        NewNode->next = NULL;
        currentP->next = NewNode;
        currentP = NewNode;
    }

    return OK;

}