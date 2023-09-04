#include "main.h"


/**
 * close_h - close files
 * @source_f: source file
 * @des_f: destination file
 */
void close_h(int source_f, int des_f)
{
	int c;

	c = close(source_f);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_f);
		exit(100);
	}
	c = close(des_f);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error:Can't close fd %d\n", des_f);
		exit(100);
	}
}


/**
 * error_handle - handle file errors
 * @source_f: source file
 * @des_f: destination file
 * @argv: argument vector
 */
void error_handle(int source_f, int des_f, char *argv[])
{
	if (source_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		argv[1]);
		exit(98);
	}
	if (des_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}


/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{
int source_f;
int des_f;
char f_buffer[1024];
ssize_t num_of_chars_read;
ssize_t num_of_chars_written;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	exit(97);
}
source_f = open(argv[1], O_RDONLY);
des_f = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_handle(source_f, des_f, argv);
num_of_chars_read = 1024;
while (num_of_chars_read == 1024)
{
	num_of_chars_read = read(source_f, f_buffer, 1024);
	if (num_of_chars_read == -1)
	{
		error_handle(-1, 0, argv);
	}
	num_of_chars_written = write(des_f, f_buffer, num_of_chars_read);
	if (num_of_chars_written == -1)
	{
		error_handle(0, -1, argv);
	}
}
close_h(source_f, des_f);
return (0);
}

