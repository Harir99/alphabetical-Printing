#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_file (FILE *f1){
    int length;
    int size;

    size  = file_size(f1); /* get the size of the file */
    fread(original,1,file_size(f1),f1);
    length = strlen(original);
    original[length] = '\0'; /* add end of string sign */
}
