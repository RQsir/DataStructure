#include "main.h"

int main() {

//    linearListTest();
//    LinkListTest();
//    StaticLinkListTest();
//    CircularLinkListTest();
//    JosephusProblemTest();
    HasLoopTest();
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

void CircularLinkListTest(){
    CLinkList CLinkList = NULL;
    CLinkListInit(&CLinkList);

//    CLinkListInsert(&CLinkList,1,100);
//    CLinkListInsert(&CLinkList,4,300);
//    CLinkListInsert(&CLinkList,0,400);
//    CLinkListInsert(&CLinkList,-1,500);
//    CLinkListInsert(&CLinkList,-4,600);

    int i = CLinkList_Search(CLinkList,8);

    CLinkList_Del(&CLinkList,0);
    CLinkList_Del(&CLinkList,1);
    CLinkList_Del(&CLinkList,-1);
    CLinkList_Del(&CLinkList,4);
    CLinkList_Del(&CLinkList,-4);


    int length = CLinkList_getLength(CLinkList);
    printf("\nthe length of CLinkList is: %d",length);
}

void JosephusProblemTest(){
    JosephusProblem();
}

void HasLoopTest(){
    LinkList L = NULL;
    LinkListCreateByTail(&L,10);
//    HasLoop(L);
    HasLoop2(L);
}