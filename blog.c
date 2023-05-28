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
#include "./update/update_blog.h"


struct parsed_json {

};
void main(){
    // blog_node * head = create_multiple_blog();

    // blog_node * head = create_multiple_demo_blog();
    // display_all_blogs(head);
    // display_all_title(head);
    // display_content_by_serial(head, 3);
    // display_title_by_serial(head, 2);


    
        printf("\n========================\n");
        printf("1. Create new blogs\n");
        printf("2. Create demo blogs\n");
        printf("========================\n");
        int n;
        printf("Enter input: ");
        write_int(&n);
        printf("========================\n");
         blog_node * head;
        if(n == 1){
            head = create_multiple_blog();
        } else if(n == 2) {
            head = create_multiple_demo_blog();
        }

        for(;;){
                display_all_blogs(head);
                printf("\n========================\n");
                printf("Main Menu: \n");
                printf("1. Add new blog\n");
                printf("2. Update blog\n");
                printf("3. Delete blog\n");
                printf("4. Exit\n");

                int operation;
                printf("Enter a number to select option: ");
                write_int(&operation);
                
                if(operation == 1){
                    add_new_blog(head);
                    printf("\nNew blog is added. \nPress any key to read all blogs and get main menu\n");
                    getchar();
                    printf("\n========================\n");
                }
                else if(operation == 2){
                    int u;
                    printf("Which blog do you want to update? : ");
                    write_int(&u);
                    update_blog_by_serial(head, u);
                    printf("\n%d number blog is updated. \nPress any key to read all blogs and get main menu\n", u);
                    getchar();
                    printf("\n========================\n");
                }
                else if(operation == 3){
                    int del;
                    printf("\nWhich number of blog do you want to delete? answer: ");
                    write_int(&del);
                    head = delete_blog_by_serial(head, del);
                    printf("\n%d number blog is deleted. \nPress any key to read all blogs and get main menu\n", del);
                    getchar();
                    printf("\n========================\n");
                } else if(operation == 4){
                    break;
                }
            }
     




   

}