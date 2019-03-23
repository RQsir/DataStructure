//
// Created by rqsir on 19-3-21.
//

#include "LinkListDestroy.h"

Status LinkListDestroy(LinkList *L){
    LinkList currentP = (*L)->next;
    (*L)->data = 0;
    LinkList DestroyNode = NULL;

    while(currentP){
        DestroyNode = currentP;
        currentP = currentP->next;
        free(DestroyNode);
    }

    (*L)->next = NULL;
    return OK;
}
