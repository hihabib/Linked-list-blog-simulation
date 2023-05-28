#ifndef TITLE_LENGTH
#define TITLE_LENGTH 100
#endif


#ifndef CONTENT_LENGTH
#define CONTENT_LENGTH 200
#endif

// Artile Content Container
struct title_node {
    char title[TITLE_LENGTH];
    struct title_node * next;
};


// Article Content Container
struct content_node {
    char content[CONTENT_LENGTH];
    struct content_node * next;
};



// Blog Container
struct blog_node {
    struct title_node * title;
    struct content_node * content;
    struct blog_node * next;
};

// Type defination
typedef struct blog_node blog_node;
typedef struct title_node title_node;
typedef struct content_node content_node;