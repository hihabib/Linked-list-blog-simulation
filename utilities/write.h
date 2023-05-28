#ifndef WRITE_H
#ifndef STDIO_H
#include <stdio.h>
#endif
#ifndef STRING_H
#include <string.h>
#endif

#ifndef WRITE_STRING_DEFINED
#define WRITE_STRING_DEFINED
// get string input from user
void write_string(char *ptr, int length){
    char str[length+1];
    fgets(str, length+1, stdin);
    for(int i = 0; i < length+1; i++){
        *ptr = str[i];
        ptr++;
    }
}
#endif

#ifndef WRITE_INT_DEFINED
#define WRITE_INT_DEFINED
// get integer input from user
void write_int(int *num){
    scanf("%d", num);
    // remove the \n from input buffer
    getchar();
}
#endif
#endif