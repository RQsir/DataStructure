//
// Created by rqsir on 19-3-23.
//

#include "GetMiddleNode.h"

Status GetMiddleNode(LinkList L,ElemType *e){
    LinkList search=L,mid=L;  // define a fast pointer search, and a slow pointer mid

    //method 1
    /*int step = 0;

    while(search){
        search = search->next;
        step++;
        if(step%2 == 0){
            mid = mid->next;
        }
    }*/

    //method 2
    while (search && search->next){
        search = search->next->next;
        mid = mid->next;
    }

    *e = mid->data;
    return OK;
}
