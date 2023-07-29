#ifndef _FILE_IO_
#define _FILE_IO_

#include <elf.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
ssize_t read_textfile(const char *filename, size_t letters);
int _strlen(char *s);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_file(const char *src, const char *dest);
void error_handle(int source_f, int des_f, char *argv[]);
void close_h(int source_f, int des_f);
#endif
