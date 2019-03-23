//
// Created by rqsir on 19-3-21.
//

#include "SlinkListDel.h"

Status SLinkListDel(StaticLinkList L,int i, ElemType *e){

    int currentCur = LISTSIZE-1;
    int j=0;

    while(currentCur != -1 && j<i-1){
        j++;
        currentCur = L[currentCur].cursor;
    }

    if(j != i-1 || L[currentCur].cursor == -1){
        printf("\nDELETE ERROR!!!");
        return ERROR;
    }

    int delCur = L[currentCur].cursor;
    L[currentCur].cursor = L[delCur].cursor;  //remove delCur from workingList
    *e = L[delCur].data;
    L[LISTSIZE-1].data--;

    L[delCur].cursor = L[0].cursor;  // add delCur to prepareList
    L[delCur].data = 0;
    L[0].cursor = delCur;

    return OK;
}
