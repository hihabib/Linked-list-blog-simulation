#ifndef UPDATE_TITLE_H

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

#ifndef UPDATE_TITLE_BY_SERIAL_DEFINED
#define UPDATE_TITLE_BY_SERIAL_DEFINED
void update_title_by_serial(title_node * head, int serial){
    
    title_node * temp = head;
    int i = 1;
    for(;;){
        if(i != serial){
            temp = temp -> next;
            i++;
            continue;
        } else {
            char title[TITLE_LENGTH];
            write_string(title, TITLE_LENGTH);
            strcpy(temp ->title, title);
            break;
        }
    }
}
#endif

#endif