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
        printf("\n========================\n");
        printf("1. Create new blogs (Manually)\n");
        printf("2. Create demo blogs (Automatic)\n");
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
                display_all_title(head);
                printf("\n========================\n");
                printf("Main Menu: \n");
                printf("1. Add new blog\n");
                printf("2. Update blog\n");
                printf("3. Delete blog\n");
                printf("4. View content of\n");
                printf("5. View all blogs\n");
                printf("6. Exit\n");

                int operation;
                printf("Enter a number to select option: ");
                write_int(&operation);

                switch (operation)
                {
                    case 1:
                        add_new_blog(head);
                        printf("\nNew blog is added. \nPress any key to read all blog's title and get main menu\n");
                        getchar();
                        printf("\n========================\n");
                        break;
                    case 2:
                        int u;
                        printf("Which blog do you want to update? : ");
                        write_int(&u);

                        // update options
                        int update_option;
                        printf("\nSelect an option: \n");
                        printf("1. Update title only\n");
                        printf("2. Update content only\n");
                        printf("3. Update title and content both\n");
                        printf("4. Cancel updating\n");
                        printf("Enter Input: ");
                        write_int(&update_option);
                        switch (update_option)
                        {
                        case 1:
                            printf("Enter new title for blog-%d: ", u);
                            update_title_by_serial(head->title, u);
                            break;
                        case 2:
                            printf("Enter new content for blog-%d: ", u);
                            update_content_by_serial(head->content, u);
                            break;
                        case 3:
                            update_blog_by_serial(head, u);
                            break;
                        }

                        if(!update_option == 4){
                            printf("\n%d number blog is updated.", u);
                        } else {
                            printf("\nUpdating is canceled");
                        }
                        printf("\nPress any key to read all blog's title and get main menu\n");
                        getchar();
                        printf("\n========================\n");
                        break;
                    case 3:
                        int del;
                        printf("\nWhich number of blog do you want to delete? answer: ");
                        write_int(&del);
                        head = delete_blog_by_serial(head, del);
                        printf("\n%d number blog is deleted. \nPress any key to read all blog's title and get main menu\n", del);
                        getchar();
                        printf("\n========================\n");
                        break;
                    case 4:
                        int view_content;
                        printf("\nWhich blog content do you want to read? :");
                        write_int(&view_content);
                        printf("\n========================\n");
                        display_content_by_serial(head, view_content);
                        printf("\n%d number blog content is displayed above. \nPress any key to read all blog's title and get main menu\n", view_content);
                        getchar();
                        printf("\n========================\n");
                        break;
                    case 5:
                        display_all_blogs(head);
                        printf("\nAll blogs are displayed above. \nPress any key to read all blog's title and get main menu\n");
                        getchar();
                        printf("\n========================\n");
                        break;
                    }
                
               
                if(operation == 6){
                    break;
                }
            }
     




   

}