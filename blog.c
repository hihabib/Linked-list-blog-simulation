#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "types.h"


title_node * create_title(){
    title_node * title = (title_node *) malloc(sizeof(title_node));
    printf("\nEnter title: ");
    fgets(title->title, TITLE_LENGTH, stdin);
    title->next = NULL;
    return title;
}
content_node * create_content(){
    content_node * content = (content_node *) malloc(sizeof(content_node));
    printf("\nEnter Content: ");
    fgets(content->content, CONTENT_LENGTH, stdin);
    content->next = NULL;
    return content;
}

blog_node * create_single_blog(title_node * title, content_node * content){
    blog_node * blog_body = (blog_node *) malloc(sizeof(blog_node));
    blog_body ->title = title;
    blog_body ->content = content;
    blog_body -> next = NULL;
    return blog_body;
}
