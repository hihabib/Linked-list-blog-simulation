#ifndef CREATE_TITLE_H

#ifndef STDIO_H
#include <stdio.h>
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#endif

#ifndef TYPES_H
#include "../types/types.h"
#endif

#ifndef WRITE_H
#include "../utilities/write.h"
#endif

#ifndef CREATE_TITLE_DEFINED
#define CREATE_TITLE_DEFINED

title_node * create_title(){
    title_node * title = (title_node *) malloc(sizeof(title_node));
    printf("\nEnter title: ");
    write_string(title->title, TITLE_LENGTH);
    title->next = NULL;
    return title;
}
#endif

#ifndef CREATE_DEMO_TITLE_DEFINED
#define CREATE_DEMO_TITLE_DEFINED

title_node * create_demo_title(int serial){
    title_node * title = (title_node *) malloc(sizeof(title_node));
    char serial_str[10];
    sprintf(serial_str,"%d",serial);
    char demo_text[TITLE_LENGTH] = "Demo title-";
    strcat(demo_text, serial_str);

    strcpy(title->title, demo_text);
    title->next = NULL;
    return title;
}
#endif

#endif