//
// Created by rqsir on 3/24/19.
//

#include "CLinkList_connect.h"

CLinkList CLinkList_connect(CLinkList L1,CLinkList L2){

    CLinkList L1_head = L1->next;
    L1->next = L2->next->next;
    free(L2->next);  //realse L2's headNode

    L2->next = L1_head;

    return L2;

}
