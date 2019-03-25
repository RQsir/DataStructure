//
// Created by rqsir on 19-3-21.
//

#include "LinkListCreateByTail.h"

Status LinkListCreateByTail(LinkList *L,int ElemNum){

    *L = (LinkList)malloc(sizeof(Node));
    (*L)->data = ElemNum;
    (*L)->next = NULL;

    LinkList currentP = *L;
    LinkList PointerAtX = NULL;

    for(int i=0; i<ElemNum; i++){
        LinkList NewNode;
        NewNode = (LinkList)malloc(sizeof(Node));
        if(i == X){
            PointerAtX = NewNode;
        }
        NewNode->data = i;
        NewNode->next = NULL;
        currentP->next = NewNode;
        currentP = NewNode;
    }

    // add a loop at X node
    currentP->next = PointerAtX;


    return OK;

}