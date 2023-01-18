#ifndef DOG_STRUCT
#define DOG_STRUCT
/**
 * struct dog - structure dog
 * @name: variable for the name of the dog
 * @owner: variable for the owner of the dog
 * @age: variable for age
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
