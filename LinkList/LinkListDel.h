//
// Created by rqsir on 19-3-20.
//

#ifndef DATASTRUCTURE_LINKLISTDEL_H
#define DATASTRUCTURE_LINKLISTDEL_H

#include "LinkList.h"
#include "stdio.h"
#include "stdlib.h"

Status LinkListDelByValue(LinkList L,ElemType e);
Status LinkListDelByPosition(LinkList L,int i,ElemType *e);

#endif //DATASTRUCTURE_LINKLISTDEL_H
