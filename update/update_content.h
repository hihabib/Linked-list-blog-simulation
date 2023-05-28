#ifndef UPDATE_CONTENT_H

#ifndef STDIO_H
#include <stdio.h>
#endif

#ifndef STRING_H
#include <string.h>
#endif

#ifndef WRITE_H
#include "../utilities/write.h"
#endif

#ifndef TYPES_H
#include "../types/types.h"
#endif

#ifndef UPDATE_CONTENT_BY_SERIAL_DEFINED
#define UPDATE_CONTENT_BY_SERIAL_DEFINED
void update_content_by_serial(content_node * head, int serial){
    
    content_node * temp = head;
    int i = 1;
    for(;;){
        if(i != serial){
            temp = temp -> next;
            i++;
            continue;
        } else {
            char content[CONTENT_LENGTH];
            write_string(content, CONTENT_LENGTH);
            strcpy(temp ->content, content);
            break;
        }
    }
}
#endif

#endif