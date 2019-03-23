//
// Created by rqsir on 19-3-21.
//

#include "SLinkListInsert.h"

Status SLinkListInsert(StaticLinkList L,int i, ElemType e){
    int j = 1;
    int currentCur = LISTSIZE-1;

    while(currentCur != -1 && j<i){
        j++;
        if(L[currentCur].cursor != -1)
            currentCur = L[currentCur].cursor;
    }

    if(L[0].cursor != -1){
        int newNodeCur = L[0].cursor;
        L[0].cursor = L[L[0].cursor].cursor; //remove Node from prepared list

        //add newNode to workingList
        L[newNodeCur].cursor = L[currentCur].cursor;
        L[currentCur].cursor =  newNodeCur;
        L[newNodeCur].data = e;
        L[LISTSIZE-1].data++;
    }
}
