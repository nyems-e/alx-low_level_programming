#include "main.h"
/**
 * _strlen- length of string
 * @str: string to find length of
 * Return: length of string
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;

	}
	return (count);
}


/**
 * create_file- creating a new file and reading a string into it
 * @filename: name of file to create
 * @text_content: string to read into file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_des;
	int file_des_w;
	int text_len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		text_len = _strlen(text_content);
	}
	file_des = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	file_des_w = write(file_des, text_content, text_len);
	if (file_des == -1 || file_des_w == -1)
	{
		return (-1);
	}
	close(file_des);
	return (1);
}



