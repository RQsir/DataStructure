//
// Created by rqsir on 3/24/19.
//

#include "CLinkList_getLength.h"

int CLinkList_getLength(CLinkList L){
    CLinkList walker = L;
    int count = 0;

    if(walker){
        count = 1;
    } else{
        return ERROR;
    }

    while(walker->next != L){
        walker = walker->next;
        count++;
    }

    return count;
}
