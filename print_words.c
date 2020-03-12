#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alphabets.h"

void print_words(char** strings){
    int i = 0;
    while ( strings[i] != NULL){  /*  prints out the words, but stops when it reaches Null pointer */
        printf("%s\n",strings[i]);
        i++;
    }
    printf("\n");
}
