cmake_minimum_required(VERSION 3.13)
project(DataStructure C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(LinearList)
include_directories(LinkList)
include_directories(StaticLinkList)

add_executable(DataStructure
        LinearList/LinearList.h
        LinearList/LinearListAll.h
        LinearList/LinearListDel.c
        LinearList/LinearListDel.h
        LinearList/LinearListGetElem.c
        LinearList/LinearListGetElem.h
        LinearList/LinearListInsert.c
        LinearList/LinearListInsert.h
        LinkList/LinkList.h
        LinkList/LinkListAll.h
        LinkList/LinkListCreateByHead.c
        LinkList/LinkListCreateByHead.h
        LinkList/LinkListCreateByTail.c
        LinkList/LinkListCreateByTail.h
        LinkList/LinkListDel.c
        LinkList/LinkListDel.h
        LinkList/LinkListDestroy.c
        LinkList/LinkListDestroy.h
        LinkList/LinkListGetElem.c
        LinkList/LinkListGetElem.h
        LinkList/LinkListInsert.c
        LinkList/LinkListInsert.h
        StaticLinkList/InitList.c
        StaticLinkList/InitList.h
        StaticLinkList/SlinkListDel.c
        StaticLinkList/SlinkListDel.h
        StaticLinkList/SLinkListInsert.c
        StaticLinkList/SLinkListInsert.h
        StaticLinkList/StaticLinkList.h
        StaticLinkList/StaticLinkListAll.h
        BaseHeader.h
        main.c
        LinkList/Examples/GetMiddleNode.c
        LinkList/Examples/GetMiddleNode.h
        CircularLinkList/CLinkListInit.c
        CircularLinkList/CLinkListInit.h CircularLinkList/CLinkListAll.h CircularLinkList/CLinkList.h CircularLinkList/CLinkListInsert.c CircularLinkList/CLinkListInsert.h CircularLinkList/CLinkList_getLength.c CircularLinkList/CLinkList_getLength.h CircularLinkList/CLinkList_Del.c CircularLinkList/CLinkList_Del.h CircularLinkList/CLinkList_Search.c CircularLinkList/CLinkList_Search.h CircularLinkList/Example/JosephusProblem.c CircularLinkList/Example/JosephusProblem.h main.h CircularLinkList/CLinkList_connect.c CircularLinkList/CLinkList_connect.h LinkList/HasLoop.c LinkList/HasLoop.h)
