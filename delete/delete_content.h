#ifndef DELETE_CONTENT_H

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

#ifndef DELETE_FIRST_CONTENT_DEFINED
#define DELETE_FIRST_CONTENT_DEFINED
content_node * delete_first_content(content_node * head){
    content_node * temp = head->next;
    free(head);
    head = temp;
    return head;
}
#endif

#ifndef DELETE_CONTENT_BY_SERIAL_DEFINED
#define DELETE_CONTENT_BY_SERIAL_DEFINED
content_node * delete_content_by_serial(content_node * head, int serial){
    
    if(serial == 1){
        head = delete_first_content(head);
        return head;
    }
    content_node * p = head;
    content_node * q = head->next;
    int i = 2;
    for(;;){
        if(i < serial){
            i++;
            p = p->next;
            q = q->next;
            continue;
        } else if(i == serial){
            content_node * temp = q;
            p -> next = temp ->next;
            free(q);
            break;
        }
    }
    return head;
}

#endif
#endif