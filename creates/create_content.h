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
    printf("Enter Content: ");
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
    sprintf(serial_str,"%d\n",serial);
    char demo_text[CONTENT_LENGTH] = "Lorem, ipsum dolor sit amet consectetur adipisicing elit. Cum voluptatum optio esse? Maxime laudantium numquam unde voluptate expedita ullam iste veritatis consectetur! Dolor sit, deleniti, exercitationem cumque voluptatem nulla consequuntur quo veritatis, non aut eligendi. Illo fuga, totam magni quasi inventore quo iusto suscipit provident id. Voluptate assumenda corporis ipsam.-";
    strcat(demo_text, serial_str);
    
    strcpy(content->content, demo_text);
    content->next = NULL;
    return content;
}
#endif


#endif
