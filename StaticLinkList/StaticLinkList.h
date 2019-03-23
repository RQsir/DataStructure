//
// Created by rqsir on 19-3-21.
//

#ifndef DATASTRUCTURE_STATICLINKLIST_H
#define DATASTRUCTURE_STATICLINKLIST_H

#include "../BaseHeader.h"
#define LISTSIZE 10
typedef struct {
    ElemType data;
    int cursor;
} Component,StaticLinkList[LISTSIZE];

#endif //DATASTRUCTURE_STATICLINKLIST_H
