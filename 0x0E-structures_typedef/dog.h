#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Contains data relating to a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Dog's owner name
 *
 * Description: This struct contains the details of a dog.
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


#endif /* DOG_H */