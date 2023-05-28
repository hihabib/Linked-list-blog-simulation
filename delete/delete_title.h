#ifndef DELETE_TITLE_H

#ifndef STDIO_H
#include <stdio.h>
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#endif

#ifndef WRITE_H
#include "../utilities/write.h"
#endif

#ifndef TYPES_H
#include "../types/types.h"
#endif

#ifndef DELETE_FIRST_TITLE_DEFINED
#define DELETE_FIRST_TITLE_DEFINED
title_node * delete_first_title(title_node * head){
    title_node * temp = head->next;
    free(head);
    head = temp;
    return head;
}
#endif

#ifndef DELETE_TITLE_BY_SERIAL_DEFINED
#define DELETE_TITLE_BY_SERIAL_DEFINED
title_node * delete_title_by_serial(title_node * head, int serial){

    if(serial == 1){
        head = delete_first_title(head);
        return head;
    }

    title_node * p = head;
    title_node * q = head->next;
    int i = 2;
    for(;;){
        if(i < serial){
            i++;
            p = p->next;
            q = q->next;
            continue;
        } else if(i == serial){
            title_node * temp = q;
            p -> next = temp ->next;
            free(q);
            break;
        }
    }
    return head;
}

#endif
#endif