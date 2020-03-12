#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alphabets.h"

char** read_words(FILE *fp){
    char word[45];
    int word_count = 0;
    int size = file_size(fp);

    char** strings = malloc(size * sizeof(char*));
    /* scan the words in the file and allocate room for the word in the file as we count them */
    while (fscanf(fp,"%s",word) != EOF){
        strings[word_count] = malloc(45* sizeof(char));
        strcpy(strings[word_count], word);
        word_count++;
    }
    strings[word_count] = NULL;  /* strings holds Null pointer after entered words to endicate the end of the word list */
    return strings;
}
