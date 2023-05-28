#ifndef DELETE_BLOG_H

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

#ifndef DELETE_TITLE_H
#include "./delete_title.h"
#endif

#ifndef DELETE_CONTENT_H
#include "./delete_content.h"
#endif

#ifndef DELETE_FIRST_BLOG_DEFINED
#define DELETE_FIRST_BLOG_DEFINED
blog_node * delete_first_blog(blog_node * head){
    blog_node * temp = head->next;
    free(head);
    head = temp;
    return head;
}
#endif


#ifndef DELETE_BLOG_BY_SERIAL_DEFINED
#define DELETE_BLOG_BY_SERIAL_DEFINED
blog_node * delete_blog_by_serial(blog_node * head, int serial){

    if(serial == 1){
        head = delete_first_blog(head);
        return head;
    }
    blog_node * p = head;
    blog_node * q = head->next;

    delete_title_by_serial(head->title, serial);
    delete_content_by_serial(head->content, serial);

    int i = 2;
    for(;;){
        if(i < serial){
            i++;
            p = p->next;
            q = q->next;
            continue;
        } else if(i == serial){
            blog_node * temp = q;
            p -> next = temp ->next;
            free(q);
            break;
        }
    }
    return head;
}

#endif
#endif