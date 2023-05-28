#ifndef DISPLAY_BLOG_H

#ifndef STDIO_H
#include <stdio.h>
#endif

#ifndef TYPES_H
#include "../types/types.h"
#endif


#ifndef DISPLAY_ALL_BLOGS_DEFINED
#define DISPLAY_ALL_BLOGS_DEFINED
void display_all_blogs(blog_node * head){
    blog_node * temp = head;
    int i = 1;
    for(;;){
       
            printf("\n%d.\nTitle: %s", i, ( temp->title ) -> title);
            printf("Content: %s\n", ( temp->content ) -> content);
            i++;
      
        if(temp -> next != NULL){
            temp = temp -> next;
        } else {
            break;
        }
    }
}
#endif

#endif