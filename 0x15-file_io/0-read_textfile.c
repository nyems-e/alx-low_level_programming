#include "main.h"

/**
 * read_textfile- read text file and print to STD OUT
 * @filename: file name
 * @letters: number of letters to be read
 * Return: actual number letter read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_des;
int b_read;
char *buff = malloc(sizeof(char *) * letters);
if (buff == NULL)
{
	return (0);
}
if (filename == NULL)
{
	return (0);
}
file_des = open(filename, O_RDONLY, 0600);
if (file_des == -1)
{
	return (0);
}
b_read = read(file_des, buff, letters);
write(STDOUT_FILENO, buff, b_read);
free(buff);
close(file_des);
return (b_read);
}
