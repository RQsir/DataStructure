//
// Created by rqsir on 19-3-19.
//

#ifndef DATASTRUCTURE_LINKLIST_H
#define DATASTRUCTURE_LINKLIST_H

#include "../BaseHeader.h"

typedef struct Node{
    ElemType data;
    struct Node *next;
} Node;

typedef struct Node* LinkList;

#endif //DATASTRUCTURE_LINKLIST_H
