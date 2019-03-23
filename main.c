#include <stdio.h>
#include "LinearList/LinearListAll.h"
#include "LinkList/LinkListAll.h"
#include "StaticLinkList/StaticLinkListAll.h"

void linearListTest();
void LinkListTest();
void StaticLinkListTest();

int main() {

//    linearListTest();
    LinkListTest();
//    StaticLinkListTest();

    return 0;
}

void linearListTest(){
    ElemType e;
    LinearList L={.length=0,.data={}};

    LinearListInsert(&L,1,1);
    LinearListInsert(&L,2,2);
    LinearListInsert(&L,3,3);
    LinearListInsert(&L,4,4);

    LinearListGetElem(L,1,&e);
    printf("the 1th element is: %d",e);

    LinearListGetElem(L,L.length,&e);
    printf("-----the last element is: %d\n",e);

    LinearListDel(&L,1,&e);
    printf("the del element is: %d\n",e);

    LinearListGetElem(L,1,&e);
    printf("After deleting,the 1th element is: %d",e);

    LinearListGetElem(L,L.length,&e);
    printf("-----the last element is: %d\n",e);

    LinearListGetElem(L,4,&e);
}

void LinkListTest(){
    ElemType e;
    LinkList L = NULL;

    LinkListCreateByHead(&L,4);

    GetMiddleNode(L,&e);

    LinkListDestroy(&L);

    LinkListCreateByTail(&L,2);

    LinkListInsert(L,1,1);
    LinkListInsert(L,2,2);
    LinkListInsert(L,3,3);
    LinkListInsert(L,4,4);

    LinkListGetElem(L,1,&e);
    LinkListGetElem(L,2,&e);
    LinkListGetElem(L,3,&e);
    LinkListGetElem(L,4,&e);

    LinkListInsert(L,7,7);
    LinkListInsert(L,8,8);

    LinkListDelByValue(L,4);
    LinkListDelByPosition(L,1,&e);
    LinkListDelByValue(L,8);
    LinkListDelByValue(L,9);

}

void StaticLinkListTest(){
    ElemType e;
    StaticLinkList L;
    InitList(&L);

    SLinkListInsert(L,1,1);
    SLinkListInsert(L,2,2);
    SLinkListInsert(L,3,3);

    SLinkListInsert(L,8,8);
    SLinkListInsert(L,3,1111);


    SLinkListInsert(L,4,4);

    SLinkListDel(L,1,&e);
    SLinkListDel(L,6,&e);
    SLinkListDel(L,3,&e);

}