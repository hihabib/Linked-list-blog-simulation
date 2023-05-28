#ifndef TYPES_H
#ifndef TITLE_LENGTH
#define TITLE_LENGTH 100
#endif

#ifndef CONTENT_LENGTH
#define CONTENT_LENGTH 1000
#endif

#ifndef TITLE_NODE_STRUCTURE
#define TITLE_NODE_STRUCTURE
// Artile Content Container
struct title_node {
    char title[TITLE_LENGTH];
    struct title_node * next;
};
#endif

#ifndef CONTENT_NODE_STRUCTURE
#define CONTENT_NODE_STRUCTURE
// Article Content Container
struct content_node {
    char content[CONTENT_LENGTH];
    struct content_node * next;
};
#endif



#ifndef BLOG_NODE_STRUCTURE
#define BLOG_NODE_STRUCTURE
// Blog Container
struct blog_node {
    struct title_node * title;
    struct content_node * content;
    struct blog_node * next;
};
#endif

// Type defination
#ifndef blog_node
typedef struct blog_node blog_node;
#endif

#ifndef title_node
typedef struct title_node title_node;
#endif

#ifndef content_node
typedef struct content_node content_node;
#endif


#endif