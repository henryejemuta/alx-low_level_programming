#ifndef MY_DOG_STRUCT
#define MY_DOG_STRUCT
/**
 * struct dog - Object of a dog
 * @name: name of the dog
 * @age: the dog age
 * @owner: name of the owner
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
