//
// Created by rqsir on 19-3-23.
//

#include "CLinkListInit.h"

Status CLinkListInit(CLinkList *p){
    CLinkList *walker = p;
    int item = 0;
    CLinkList i = NULL;

    while(1){
        printf("\nplease input the circular_link_list item value(if value equal to 0,break out!!!): ");
        fflush(stdin);
        scanf("%d",&item);

        if(item == 0){
            printf("\nwork done,bye!");
            return OK;
        }

        if(*walker == NULL){ // single node circularLinkList
            CLinkList newNode = (Node*)malloc(sizeof(Node));
            *walker = newNode;
            (*walker)->next = *walker;
            (*walker)->data = item;
        } else{
            for(i = *p; i->next != *p; i=i->next);
            Node *newNode = (Node*)malloc(sizeof(Node));
            i->next = newNode;
            newNode->data = item;
            newNode->next = *p;
        }
    }

}

Status CLinkListInit2(CLinkList *p, int elemNum){
    CLinkList *walker = p;
    CLinkList target = NULL;

    for(int i=1; i<=elemNum; i++){
        if(*walker == NULL){ // single node circularLinkList
            CLinkList newNode = (Node*)malloc(sizeof(Node));
            *walker = newNode;
            (*walker)->next = *walker;
            (*walker)->data = i;
        } else{
            for(target = *p; target->next != *p; target=target->next);
            Node *newNode = (Node*)malloc(sizeof(Node));
            target->next = newNode;
            newNode->data = i;
            newNode->next = *p;
        }
    }
}

