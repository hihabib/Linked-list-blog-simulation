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

void main(){
    blog_node * head = create_multiple_blog();
    display_all_blogs(head);
    display_all_title(head);
    display_content_by_serial(head, 3);
    display_title_by_serial(head, 2);
}