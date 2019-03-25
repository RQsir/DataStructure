//
// Created by rqsir on 3/24/19.
//

#include "CLinkList_Search.h"

int CLinkList_Search(CLinkList L,ElemType e){
    CLinkList walker = L;
    int position = 0;

    if(L->data == e)
        return position;

    while(1){
        walker = walker->next;
        position++;
        if(walker->data == e){
            return position;
        }
        if(walker == L){
            printf("\nThere is no element satisfied!");
            return ERROR;
        }
    }
}
