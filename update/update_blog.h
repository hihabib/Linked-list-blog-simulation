#ifndef UPDATE_BLOG_H
#ifndef TYPES_H
#include "../types/types.h"
#endif

#ifndef UPDATE_TITLE_H
#include "./update_title.h"
#endif

#ifndef UPDATE_CONTENT_H
#include "./update_content.h"
#endif

#ifndef UPDATE_BLOG_BY_SERIAL_DEFINED
#define UPDATE_BLOG_BY_SERIAL_DEFINED
void update_blog_by_serial(blog_node * head, int serial){
    printf("Enter new title for blog-%d: ", serial);
    update_title_by_serial(head->title, serial);
    printf("Enter new content for blog-%d: ", serial);
    update_content_by_serial(head->content, serial);
}

#endif

#endif