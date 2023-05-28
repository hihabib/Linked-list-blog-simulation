#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "./utilities/write.h"
#include "./creates/create_title.h"
#include "./creates/create_content.h"
#include "./creates/create_blog.h"
#include "./display/display_title.h"
#include "./display/display_blog.h"
#include "./display/display_content.h"
#include "./delete/delete_blog.h"



struct parsed_json {

};
void main(){
    // blog_node * head = create_multiple_blog();

    // blog_node * head = create_multiple_demo_blog();
    // display_all_blogs(head);
    // display_all_title(head);
    // display_content_by_serial(head, 3);
    // display_title_by_serial(head, 2);


    
    for(;;){
        printf("\n========================\n");
        printf("1. Create new blogs\n");
        printf("2. Create demo blogs\n");
        printf("========================\n");
        int n;
        printf("Enter input: ");
        write_int(&n);
        printf("========================\n");
        
        if(n == 1){
            blog_node * head = create_multiple_blog();
            display_all_blogs(head);
        } else if(n == 2) {
            blog_node * head = create_multiple_demo_blog();
            display_all_blogs(head);
            printf("\n========================\n");
            int del;
            printf("\nWhich number of blog do you want to delete? answer: ");
            write_int(&del);
            delete_blog_by_serial(head, del);
            display_all_blogs(head);

        }
        printf("========================\n");
    }




   

}