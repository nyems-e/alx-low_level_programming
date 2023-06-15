#ifndef m_check
#define m_check

/**
 * prototypes
 */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int string_len(char *);
void makecpy(char *dest, char *src, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
void _memset(void *ptr, unsigned int value, unsigned int num);
#endif

