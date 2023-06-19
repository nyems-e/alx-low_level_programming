#ifndef DOG_H
#define DOG_H

/**
 * struct dog - element of a dog
 * @name:name of dog
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
char *name;
float age;
char *owner;
};	

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int string_len(char *s);
#endif /* DOG_H */