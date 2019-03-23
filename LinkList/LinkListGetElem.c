//
// Created by rqsir on 19-3-19.
//

#include "LinkListGetElem.h"

Status LinkListGetElem(LinkList pHead,int i,ElemType *e){
    LinkList p = pHead;
    int position = i;

    if(i<1 || i>p->data){
        printf("\nElement position is illegal!!!");
        return ERROR;
    }

    for(;i>0;i--){
        p = p->next;
        if(p == NULL){
            printf("\nElement position is illegal!!!");
            return ERROR;
        }
    }

    *e = p->data;
    printf("\nthe %dth element is: %d",position,*e);
    return OK;
}