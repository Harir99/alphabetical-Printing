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