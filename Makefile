all: alphabetical_printing

alphabetical_printing: alphabetical_printing.o  file_size.o print_words.o alphabetical_word_count.o print_alphabetical_word_count.o create_alphabetical_array.o print_words_alphabetically.o free_alphabetical_array.o free_counter.o free_strings.o read_words.o
	gcc -Wall -o alphabetical_printing  alphabetical_printing.o read_words.o file_size.o print_words.o  alphabetical_word_count.o print_alphabetical_word_count.o create_alphabetical_array.o print_words_alphabetically.o free_alphabetical_array.o free_counter.o free_strings.o

file_size.o:  file_size.c
	gcc -Wall -c file_size.c

print_words.o: print_words.c
	gcc -Wall -c print_words.c

alphabetical_word_count.o: alphabetical_word_count.c
	gcc -Wall -c  alphabetical_word_count.c

print_alphabetical_word_count.o: print_alphabetical_word_count.c
	gcc -Wall -c  print_alphabetical_word_count.c

create_alphabetical_array.o: create_alphabetical_array.c
	gcc -Wall -c  create_alphabetical_array.c

print_words_alphabetically.o: print_words_alphabetically.c
	gcc -Wall -c  print_words_alphabetically.c

free_alphabetical_array.o: free_alphabetical_array.c
	gcc -Wall -c  free_alphabetical_array.c

free_counter.o: free_counter.c
	gcc -Wall -c free_counter.c

free_strings.o: free_strings.c
	gcc -Wall -c free_strings.c

read_words.o: read_words.c  file_size.c
		gcc -Wall -c read_words.c
clean:
	rm -rf *.o
	rm -rf alphabetical_printing
