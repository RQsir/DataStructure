//
// Created by rqsir on 19-3-19.
//

#include "LinearListDel.h"

Status LinearListDel(LinearList *L,int i,ElemType *e){
    int k;

    if(i<1 || i>L->length){
        return ERROR;
    }

    *e = L->data[i-1];  //return delete element

    if(i < L->length){   // if the delete position is not at end of list
        for (k = i-1; k < L->length-1; k++) {
            L->data[k] = L->data[k+1];
        }
    }

    L->length--;

    return OK;
}