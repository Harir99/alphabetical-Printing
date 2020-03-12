#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alphabets.h"

char*** create_alphabetical_array (char** strings, int* counter){
    char*** alphabetical_array = malloc( 26 * sizeof(char**)); /* malloc the array to hold room for the 26 arrays  */
    int k;
    int i;
    int j;
    int word_count[26];
    for (k = 0; k < 26; k++){
        word_count[k] = 0;
    }
        for ( i = 0; i < 26; i++){
             alphabetical_array[i] = malloc( (counter[i]+1) * sizeof(char*)); /* instead of allocating the counter, we need space for the NULL pointer */
        }                                                                      /* Therefore, add 1 to counter[i] */
        i = 0;
        /* find the words that starts with each letter and add them to the string of words of that letter, stop when Null pointer is reached */
        while ( strings[i] != NULL){
                if ( strings[i][0] == 'A' || strings[i][0] == 'a' ){
                    alphabetical_array[0][word_count[0]] = strings[i];
                    word_count[0]++; /* increment word count so the previous word doesnt get replaced, and instead get added to the words stored */
                }
                else if ( strings[i][0] == 'B' || strings[i][0] == 'b' ){
                    alphabetical_array[1][word_count[1]] = strings[i];
                    word_count[1]++;
                }else if ( strings[i][0] == 'C' || strings[i][0] == 'c' ){
                    alphabetical_array[2][word_count[2]] = strings[i];
                    word_count[2]++;
                }else if ( strings[i][0] == 'D' || strings[i][0] == 'd' ){
                    alphabetical_array[3][word_count[3]] = strings[i];
                    word_count[3]++;
                }
                else if ( strings[i][0] == 'E' || strings[i][0] == 'e' ){
                    alphabetical_array[4][word_count[4]] = strings[i];
                    word_count[4]++;
                }else if ( strings[i][0] == 'F' || strings[i][0] == 'f' ){
                    alphabetical_array[5][word_count[5]] = strings[i];
                    word_count[5]++;
                }else if ( strings[i][0] == 'G' || strings[i][0] == 'g' ){
                    alphabetical_array[6][word_count[6]] = strings[i];
                    word_count[6]++;
                }
                else if ( strings[i][0] == 'H' || strings[i][0] == 'h' ){
                    alphabetical_array[7][word_count[7]] = strings[i];
                    word_count[7]++;
                }else if ( strings[i][0] == 'I' || strings[i][0] == 'i' ){
                    alphabetical_array[8][word_count[8]] = strings[i];
                    word_count[8]++;
                }else if ( strings[i][0] == 'J' || strings[i][0] == 'j' ){
                    alphabetical_array[9][word_count[9]] = strings[i];
                    word_count[9]++;
                }
                else if ( strings[i][0] == 'K' || strings[i][0] == 'k' ){
                    alphabetical_array[10][word_count[10]] = strings[i];
                    word_count[10]++;
                }
                else if ( strings[i][0] == 'L' || strings[i][0] == 'l' ){
                    alphabetical_array[11][word_count[11]] = strings[i];
                    word_count[11]++;
                }else if ( strings[i][0] == 'M' || strings[i][0] == 'm' ){
                    alphabetical_array[12][word_count[12]] = strings[i];
                    word_count[12]++;
                }else if ( strings[i][0] == 'N' || strings[i][0] == 'n' ){
                    alphabetical_array[13][word_count[13]] = strings[i];
                    word_count[13]++;
                }
                else if ( strings[i][0] == 'O' || strings[i][0] == 'o' ){
                    alphabetical_array[14][word_count[14]] = strings[i];
                    word_count[14]++;
                }else if ( strings[i][0] == 'P' || strings[i][0] == 'p' ){
                    alphabetical_array[15][word_count[15]] = strings[i];
                    word_count[15]++;
                }else if ( strings[i][0] == 'Q' || strings[i][0] == 'q' ){
                    alphabetical_array[16][word_count[16]] = strings[i];
                    word_count[16]++;
                }
                else if ( strings[i][0] == 'R' || strings[i][0] == 'r' ){
                    alphabetical_array[17][word_count[17]] = strings[i];
                    word_count[17]++;
                }else if ( strings[i][0] == 'S' || strings[i][0] == 's' ){
                    alphabetical_array[18][word_count[18]] = strings[i];
                    word_count[18]++;
                }else if ( strings[i][0] == 'T' || strings[i][0] == 't' ){
                    alphabetical_array[19][word_count[19]] = strings[i];
                    word_count[19]++;
                }
                else if ( strings[i][0] == 'U' || strings[i][0] == 'u' ){
                    alphabetical_array[20][word_count[20]] = strings[i];
                    word_count[20]++;
                }else if ( strings[i][0] == 'V' || strings[i][0] == 'v' ){
                    alphabetical_array[21][word_count[21]] = strings[i];
                    word_count[21]++;
                }else if ( strings[i][0] == 'W' || strings[i][0] == 'w' ){
                    alphabetical_array[22][word_count[22]] = strings[i];
                    word_count[22]++;
                }
                else if ( strings[i][0] == 'X' || strings[i][0] == 'x' ){
                    alphabetical_array[23][word_count[23]] = strings[i];
                    word_count[23]++;
                }else if ( strings[i][0] == 'Y' || strings[i][0] == 'y' ){
                    alphabetical_array[24][word_count[24]] = strings[i];
                    word_count[24]++;
                }else if ( strings[i][0] == 'Z' || strings[i][0] == 'z' ){
                    alphabetical_array[25][word_count[25]] = strings[i];
                    word_count[25]++;
                }
                i++;
                for (j = 0; j < 26; j++) {
                    alphabetical_array[j][word_count[j]] =  NULL;
                }

            }

    return alphabetical_array;
}
