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

blog_node * create_multiple_blog(){
    int N;
    printf("How many blog do you want to add? :");
    scanf("%d", &N);
    
    title_node * title_head = create_title();
    content_node * content_head = create_content();
    blog_node * blog_head = create_single_blog(title_head, content_head);

    // temporary variable to traverse loop
    blog_node * temp_blog = blog_head;

    for(int i = 0; i < N-1; i++){
        // create title
        title_node * new_title = create_title();

        // create content
        content_node * new_content = create_content();

        blog_node * new_blog = create_single_blog(new_title, new_content);
        temp_blog ->next = new_blog;

        temp_blog = temp_blog -> next;
    }


    return blog_head;

}