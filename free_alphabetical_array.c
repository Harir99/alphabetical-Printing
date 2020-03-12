#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alphabets.h"

void free_alphabetical_array(char*** alphabetical_array) {
    int i;
    for (i = 0; i < 26; i++) {
        int j = 0;
        while ( alphabetical_array[i][j] != NULL) { /* free the words that each letter hold*/
            free(alphabetical_array[i][j]);
            j++;
        }
        free(alphabetical_array[i]);  /* we loop 26 times and free the strings */
    }
    free(alphabetical_array);
}
