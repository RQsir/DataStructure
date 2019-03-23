//
// Created by rqsir on 19-3-19.
//

#include "LinearListGetElem.h"

Status LinearListGetElem(LinearList L,int i, ElemType *e){
    if(L.length==0 || i<1 || i>L.length){
        printf("the position is illegal!!!\n");
        return ERROR;
    }
    *e = L.data[i-1];

    return OK;
}