//
// Created by rqsir on 19-3-19.
//

#include "LinearListInsert.h"

Status LinearListInsert(LinearList *L,int i,ElemType e){
    int k;

    if(L->length == MAXSIZE){
        return ERROR;
    }
    if(i<1 || i>L->length+1){
        return ERROR;
    }

    if(i != L->length+1){   // if the insert position is not at end of list
        for (k = L->length-1; k>=i-1 ; k--) {
            L->data[k+1] = L->data[k];
        }
    }

    L->data[i-1] = e;  //insert new element
    L->length++;

    return OK;
}