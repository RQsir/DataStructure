//
// Created by rqsir on 3/24/19.
//

#include "JosephusProblem.h"

void JosephusProblem(){
    CLinkList L = NULL;
    CLinkList destroyNode = NULL;

    CLinkListInit2(&L,PERSONNUM);

//    int i = CLinkList_getLength(L);

    CLinkList walker = L;

    printf("The self-kill order is: ");

    while(1){
        for(int i=1; i<M; i++){
            walker = walker->next;
        }
        destroyNode = walker;
        printf("%d--",destroyNode->data);
        walker = walker->next;
        CLinkList_Del(&L,CLinkList_Search(L,destroyNode->data));
        if(!L){
            break;
        }
    }
}
