#include "main.h"

/**
 * _strlen - length of string
 *
 * @str: string
 * Return: length of string
 */
int _strlen(char *str)
{
int i = 0;
while (str[i] > '\0')
{
i++;
}
return (i);
}




/**
 * append_text_to_file- appends text to end of file
 * @filename: filename
 * @text_content: text
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
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
	file_des = open(filename, O_APPEND | O_WRONLY);
	file_des_w = write(file_des, text_content, text_len);
	if (file_des == -1 || file_des_w == -1)
	{
		return (-1);
	}
	close(file_des);
	return (1);
}
