----------------------
PROGRAM NAME:alphabetical_printing.c
----------------------
AUTHOR'S NAME
--------------
Harir Al-Rubaye

INTRODUCTION
------------
The program takes in a file of words (a regular text file with no punctuation) and prints out all the words from the file that start with 'A', all the words that start with 'B', etc...

Note: I used two extra functions called free_counter to free int* counter and free_strings to free char** strings and I made a header file that includes all the functions in it, called alphabets.h.

FUNCTIONS INCLUDED
-------------------
int file_size( FILE *fp);
char** read_words(FILE *fp);
void print_words(char** strings);
int* alphabetical_word_count (char** strings);
void print_alphabetical_word_count (int* counter);
char*** create_alphabetical_array (char** strings, int* counter);
void print_words_alphabetically(char*** alphabetical_array);
void free_alphabetical_array(char*** alphabetical_array);
void free_counter(int* counter);
void free_strings(char** strings);

RUNNING THE PROGRAM
-------------------
To compile the program type the following on your terminal:
    $ make all
To read the first text File:
    $ ./alphabetical_printing.c a1_words.txt

Then to try the other text file:
    $ ./alphabetical_printing.c a1_more_words.txt

After that to get rid of the *.o files:
    $ make clean
