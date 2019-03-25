//
// Created by rqsir on 3/24/19.
//

#include "CLinkList_Del.h"

Status CLinkList_Del(CLinkList *L,int position){
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
        absPos = length - position % length;
        if(position % length == 0){
            absPos = 1;
        }
    } else{
        absPos = length;
    }

    for(int i=1; i<absPos;i++){
        walker = walker->next;
    }

    if((*L)->next == *L){
        *L = NULL;
        return OK;
    }
    CLinkList destroyNode = walker->next;
    walker->next = destroyNode->next;
    free(destroyNode);

    if(position == 0){
        *L = walker->next;
    }

    return OK;
}
