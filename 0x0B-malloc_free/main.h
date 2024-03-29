#ifndef mal
#define mal

char *create_array(unsigned int size, char c);
void _putchar(int);
char *_strdup(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int string_len(char *);
char *str_concat(char *s1, char *s2);
void free_grid(int **grid, int height);
char *argtostr(int ac, char **av);
int _strlen(char **s, int al);
char *_strncpy(char *dest, char *src, int n);
char **strtow(char *str);
int _StrLen(char *str);
int _strcmp(char *s1, char *s2);
#endif
