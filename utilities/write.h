#include <stdio.h>
#include <string.h>


// get string input from user
void write_string(char *ptr, int length){
    char str[length+1];
    fgets(str, length+1, stdin);
    for(int i = 0; i < length+1; i++){
        *ptr = str[i];
        ptr++;
    }
}

// get integer input from user
void write_int(int *num){
    scanf("%d", num);
    // remove the \n from input buffer
    getchar();
}

