#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
# include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/* Function that reads a text file and prints it to the POSIX standard output*/
ssize_t read_textfile(const char *filename, size_t letters);

/* Function that creates a file */
int create_file(const char *filename, char *text_content);

/* function that appends text at the end of a file */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H*/
