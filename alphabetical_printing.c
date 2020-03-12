#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alphabets.h"

/*
 * Program Name: alphabetical_printing.c
 * Author(s): Harir Al-Rubaye
 * Purpose: The program takes in a file of words (a regular text file with no punctuation)
 * and prints out all the words from the file that start with 'A',all the words that start with 'B', etc...
 */

int main(int argc, char const *argv[]) {

    FILE *fp;
    char** strings = NULL;
    int* counter;
    char*** alphabetical_array;

           if( (fp = fopen(argv[1], "r")) != NULL) {
               if (strcmp(argv[1],"a1_words.txt") == 0 || strcmp(argv[1],"a1_more_words.txt") == 0 ){

                  strings = read_words(fp);
                  print_words(strings);
                  counter = alphabetical_word_count (strings);
                  print_alphabetical_word_count (counter);
                  alphabetical_array = create_alphabetical_array (strings,counter);
                  print_words_alphabetically(alphabetical_array);
                  free_alphabetical_array(alphabetical_array);
                  free_counter(counter);
                  free_strings(strings);
                  fclose(fp);
              }


          } else {
                 printf ( "Cannot open %s\n", argv[1] );
                 return ( -2 );
          }

    return 0;
}
