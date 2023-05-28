#ifndef DISPLAY_TITLE_H

#ifndef STDIO_H
#include <stdio.h>
#endif

#ifndef WRITE_H
#include "../utilities/write.h"
#endif

#ifndef TYPES_H
#include "../types/types.h"
#endif


#ifndef DISPLAY_ALL_TITLE_DEFINED
#define DISPLAY_ALL_TITLE_DEFINED

title_node * display_all_title(blog_node * head){
    title_node * temp = head->title;
    int i = 1;
    for(;;){
        printf("\n%d. %s", i, temp->title);
        i++;
        if(temp->next != NULL){
            temp = temp->next;
        } else {
            break;
        }
    }

    return head->title;
}
#endif


#ifndef DISPLAY_TITLE_BY_SERIAL_DEFINED
#define DISPLAY_TITLE_BY_SERIAL_DEFINED
void display_title_by_serial(blog_node * head, int serial){
    title_node * temp = head->title;
    int i = 1;
    for(;;){
        if(i < 1){
            printf("\nInvalid serial number.\nEnter the Serial Number again: ");
            int new_serial;
            write_int(&new_serial);
            display_title_by_serial(head, new_serial);
            break;
        } else {
            if(i == serial){
                printf("\n%s", temp->title);
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