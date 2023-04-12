#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: the string to duplicate
 * Return: depends on conditions
 */
char *_strdup(char *str)
{
  char *dup_str;
  unsigned int len = 0;
  unsigned int i;

  if (str == NULL)
    return (NULL);

  while (str[len] != '\0')
    len++;

  dup_str = malloc(sizeof(char) * (len + 1));

  if (dup_str == NULL)
    return (NULL);

  for (i = 0; i <= len; i++)
    dup_str[i] = str[i];

  return (dup_str);
}

