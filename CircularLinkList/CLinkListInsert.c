//
// Created by rqsir on 3/24/19.
//

#include "CLinkListInsert.h"

Status CLinkListInsert(CLinkList *L,int position,ElemType e){

    CLinkList walker = *L;
    int length = CLinkList_getLength(*L);
    int absPos = 0;

    // calculate the absolute position of the inserted element
    if(position > 0){
        absPos = position % length;
        if(absPos == 0){
            absPos = length;
        }
    }else if(position < 0){
        position = -position;
        absPos = length - position % length + 1;
        if(position % length == 0){
            absPos = 1;
        }
    } else{
        absPos = length;
    }

   /* if(position < 1 || position > length){
        printf("\nthe position is illegal!!");
    }*/

    for(int i=1; i<absPos;i++){
        walker = walker->next;
    }

    CLinkList newNode = (CLinkList)malloc(sizeof(Node));
    newNode->data = e;
    newNode->next = walker->next;
    walker->next = newNode;

    if(position == 0){
        *L = newNode;
    }

    return OK;
}
