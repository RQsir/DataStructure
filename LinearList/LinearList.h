//
// Created by rqsir on 19-3-19.
//

#ifndef DATASTRUCTURE_LINEARLIST_H
#define DATASTRUCTURE_LINEARLIST_H

#include "../BaseHeader.h"

typedef struct {
    ElemType data[MAXSIZE];
    int length; // the length of LinearList
} LinearList;

#endif //DATASTRUCTURE_LINEARLIST_H
