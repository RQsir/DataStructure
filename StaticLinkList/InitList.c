//
// Created by rqsir on 19-3-21.
//

#include "InitList.h"

Status InitList(StaticLinkList *space){

    for(int i=1; i<LISTSIZE-1; i++){
        (*space)[i].cursor = i+1;
        (*space)[i].data = 0;
        if(i == LISTSIZE-2)
            (*space)[i].cursor = -1;
    }

    (*space)[LISTSIZE-1].cursor = -1; // head pointer for list
    (*space)[LISTSIZE-1].data = 0;
    (*space[0]).cursor = 1; // head pointer for preparedList

}
