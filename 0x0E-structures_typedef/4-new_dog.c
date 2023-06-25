#include<stdlib.h>
#include"dog.h"

unsigned int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: pointer to my_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *my_dog;
	char *name_copy;
	char *owner_copy;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	name_copy = malloc(_strlen(name) + 1);
	if (name_copy == NULL)
		free(my_dog);
	_strcpy(name_copy, name);

	owner_copy = malloc(_strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(my_dog);
	}
	_strcpy(owner_copy, owner);

	my_dog->name = name_copy;
	my_dog->age = age;
	my_dog->owner = owner_copy;

	return (my_dog);
}
/**
 * _strlen - counts characters in string excluding null terminating char
 * @s: sring to be counted
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * _strcpy - copies string from source to destination
 * @src: source from where string should be copied
 * @dest: destination where src string should be copied to
 * Return: pointer to string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
