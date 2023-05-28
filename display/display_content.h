#ifndef DISPLAY_CONTENT_H

#ifndef STDIO_H
#include <stdio.h>
#endif

#ifndef TYPES_H
#include "../types/types.h"
#endif

#ifndef WRITE_H
#include "../utilities/write.h"
#endif


#ifndef DISPLAY_CONTENT_BY_SERIAL_DEFINED
#define DISPLAY_CONTENT_BY_SERIAL_DEFINED
void display_content_by_serial(blog_node * head, int serial){
    content_node * temp = head->content;
    int i = 1;
    for(;;){
        if(serial < 1){
            printf("\nInvalid serial number.\nEnter the Serial Number again: ");
            int new_serial;
            write_int(&new_serial);
            display_content_by_serial(head, new_serial);
            break;
        } else {
            if(i == serial){
                printf("\n%s", temp->content);
                break;
            } else {
                temp = temp ->next;
                i++;
                continue;
            }
        }
    }
}
#endif

#endif