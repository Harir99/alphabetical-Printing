#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alphabets.h"

int* alphabetical_word_count (char** strings){
    int k;
    int i = 0;
    int* counter = malloc(26 * sizeof(int));

for (k = 0; k < 26; k++){     /* set the counter of all 26 letters to 0 */
    counter[k] = 0;
}
while ( strings[i] != NULL){  /* counts the number of words for each letter, but stops when it reaches Null pointer */
        if ( strings[i][0] == 'A' || strings[i][0] == 'a' ){
            counter[0]++;
        }
        if ( strings[i][0] == 'B' || strings[i][0] == 'b' ){
            counter[1]++;
        }if ( strings[i][0] == 'C' || strings[i][0] == 'c' ){
            counter[2]++;
        }if ( strings[i][0] == 'D' || strings[i][0] == 'd' ){
            counter[3]++;
        }
        if ( strings[i][0] == 'E' || strings[i][0] == 'e' ){
            counter[4]++;
        }if ( strings[i][0] == 'F' || strings[i][0] == 'f' ){
            counter[5]++;
        }if ( strings[i][0] == 'G' || strings[i][0] == 'g' ){
            counter[6]++;
        }
        if ( strings[i][0] == 'H' || strings[i][0] == 'h' ){
            counter[7]++;
        }if ( strings[i][0] == 'I' || strings[i][0] == 'i' ){
            counter[8]++;
        }if ( strings[i][0] == 'J' || strings[i][0] == 'j' ){
            counter[9]++;
        }
        if ( strings[i][0] == 'K' || strings[i][0] == 'k' ){
            counter[10]++;
        }
        if ( strings[i][0] == 'L' || strings[i][0] == 'l' ){
            counter[11]++;
        }if ( strings[i][0] == 'M' || strings[i][0] == 'm' ){
            counter[12]++;
        }if ( strings[i][0] == 'N' || strings[i][0] == 'n' ){
            counter[13]++;
        }
        if ( strings[i][0] == 'O' || strings[i][0] == 'o' ){
            counter[14]++;
        }if ( strings[i][0] == 'P' || strings[i][0] == 'p' ){
            counter[15]++;
        }if ( strings[i][0] == 'Q' || strings[i][0] == 'q' ){
            counter[16]++;
        }
        if ( strings[i][0] == 'R' || strings[i][0] == 'r' ){
            counter[17]++;
        }if ( strings[i][0] == 'S' || strings[i][0] == 's' ){
            counter[18]++;
        }if ( strings[i][0] == 'T' || strings[i][0] == 't' ){
            counter[19]++;
        }
        if ( strings[i][0] == 'U' || strings[i][0] == 'u' ){
            counter[20]++;
        }if ( strings[i][0] == 'V' || strings[i][0] == 'v' ){
            counter[21]++;
        }if ( strings[i][0] == 'W' || strings[i][0] == 'w' ){
            counter[22]++;
        }
        if ( strings[i][0] == 'X' || strings[i][0] == 'x' ){
            counter[23]++;
        }if ( strings[i][0] == 'Y' || strings[i][0] == 'y' ){
            counter[24]++;
        }if ( strings[i][0] == 'Z' || strings[i][0] == 'z' ){
            counter[25]++;
        }
        i++;
    }
    return counter;
}
