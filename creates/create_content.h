#ifndef CREATE_CONTENT_H

#ifndef STDIO_H
#include <stdio.h>
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#endif

#ifndef STRING_H
#include <string.h>
#endif

#ifndef TYPES_H
#include "../types/types.h"
#endif

#ifndef WRITE_H
#include "../utilities/write.h"
#endif



#ifndef CRETE_CONTENT_DEFINED
#define CRETE_CONTENT_DEFINED
content_node * create_content(){
    content_node * content = (content_node *) malloc(sizeof(content_node));
    printf("\nEnter Content: ");
    write_string(content->content, CONTENT_LENGTH);
    content->next = NULL;
    return content;
}
#endif


#ifndef CREATE_DEMO_CONTENT_DEFINED
#define CREATE_DEMO_CONTENT_DEFINED
content_node * create_demo_content(int serial){
    content_node * content = (content_node *) malloc(sizeof(content_node));

    char serial_str[10];
    sprintf(serial_str,"%d",serial);
    char demo_text[TITLE_LENGTH] = "Demo content-";
    strcat(demo_text, serial_str);
    
    strcpy(content->content, demo_text);
    content->next = NULL;
    return content;
}
#endif


#endif
