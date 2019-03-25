//
// Created by rqsir on 3/24/19.
//

#include "HasLoop.h"

/**  method 1
 * use 2 pointer to judge whether there is a node in list we can arrive by different steps
 * one pointer is used to pointed to each node(outer while loop),
 *  while the other pointer is traversing the list(inner while loop)
 * @param L
 * @return
 */
int HasLoop(LinkList L){
    LinkList p1 = L;
    int step1 = 0;
    while (p1){
        LinkList p2 = L;
        int step2 = 0;

        while (p2){
            if(p1 == p2){
                if(step1 != step2){
                    printf("there is a loop at %dth node!!!",step2);
                    return OK;
                } else{
                    break;
                }
            }
            p2 = p2->next;
            step2++;
        }
        p1 = p1->next;
        step1++;
    }

    return ERROR;
}

/** method 2
 * use 2 pointer: a fast one and slow one to explore there whether exists a loop
 * @param L the LinkList to be identified
 * @return
 */
int HasLoop2(LinkList L){
    LinkList fastP = L;
    LinkList slowP = L;
    int fastPos = 0;
    int slowPos = 0;

    while(fastP && fastP->next){
        fastP = fastP->next->next;
        slowP = slowP->next;
        fastPos += 2;
        slowPos++;
        printf("fastPointer run %d step at %dth node, slowPointer run %d step at %dth node\n",
                fastPos,fastP->data+1,slowPos,slowP->data+1);
        if(fastP == slowP){
            printf("\nthere exists loop!!!\n");
            return OK;
        }
    }

    return ERROR;
}
