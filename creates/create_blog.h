#ifndef CREATE_BLOG_H

#ifndef STDIO_H
#include <stdio.h>
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#endif

#ifndef TYPES_H
#include "../types/types.h"
#endif

#ifndef CREATE_TITLE_H
#include "./create_title.h"
#endif

#ifndef CREATE_CONTENT_H
#include "./create_content.h"
#endif


#ifndef CREATE_SINGLE_BLOG_DEFINED
#define CREATE_SINGLE_BLOG_DEFINED
blog_node * create_single_blog(title_node * title, content_node * content){
    blog_node * blog_body = (blog_node *) malloc(sizeof(blog_node));
    blog_body ->title = title;
    blog_body ->content = content;
    blog_body -> next = NULL;
    return blog_body;
}
#endif

#ifndef CREATE_MULTIPLE_BLOG_DEFINED
#define CREATE_MULTIPLE_BLOG_DEFINED
blog_node * create_multiple_blog(){
    int N;
    printf("How many blog do you want to add? answer: ");
    write_int(&N);

    title_node * title_head = create_title();
    content_node * content_head = create_content();
    blog_node * blog_head = create_single_blog(title_head, content_head);

    // temporary variable to traverse loop
    blog_node * temp_blog = blog_head;
    title_node * temp_title = title_head;
    content_node * temp_content = content_head;

    for(int i = 0; i < N-1; i++){
        // create title
        title_node * new_title = create_title();
        temp_title->next = new_title;

        // create content
        content_node * new_content = create_content();
        temp_content->next = new_content;

        blog_node * new_blog = create_single_blog(new_title, new_content);
        temp_blog ->next = new_blog;

        temp_blog = temp_blog -> next;
        temp_title = temp_title -> next;
        temp_content = temp_content -> next;
    }


    return blog_head;

}
#endif
#ifndef CREATE_MULTIPLE_DEMO_BLOG_DEFINED
#define CREATE_MULTIPLE_DEMO_BLOG_DEFINED
blog_node * create_multiple_demo_blog(){
    int N;
    printf("How many blog do you want to add? answer: ");
    write_int(&N);

    title_node * title_head = create_demo_title(1);
    content_node * content_head = create_demo_content(1);
    blog_node * blog_head = create_single_blog(title_head, content_head);

    // temporary variable to traverse loop
    blog_node * temp_blog = blog_head;
    title_node * temp_title = title_head;
    content_node * temp_content = content_head;

    for(int i = 0; i < N-1; i++){
        // create title
        title_node * new_title = create_demo_title(i+2);
        temp_title->next = new_title;

        // create content
        content_node * new_content = create_demo_content(i+2);
        temp_content->next = new_content;

        blog_node * new_blog = create_single_blog(new_title, new_content);
        temp_blog ->next = new_blog;

        temp_blog = temp_blog -> next;
        temp_title = temp_title -> next;
        temp_content = temp_content -> next;
    }


    return blog_head;

}
#endif

#ifndef ADD_NEW_BLOG_DEFINED
#define ADD_NEW_BLOG_DEFINED
void add_new_blog(blog_node * head){
    title_node * new_title = create_title();
    content_node * new_content = create_content();
    blog_node * new_blog = create_single_blog(new_title, new_content);
    
    blog_node * temp = head;
    for(;;){
        if(temp -> next != NULL) {
            temp = temp -> next;
            continue;
        } else {
            (temp -> title) -> next = new_title;
            (temp -> content) -> next = new_content;
            temp -> next = new_blog;
            break;
        }
    }
}

#endif

#endif