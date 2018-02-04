/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <string.h>
#include <stdio.h>
char	*my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;

	while (src[i] != '\0') {
		if (i < n) {
			dest[i] = src[i];
		}
		i++;
		if (n > i)
			dest[i + 1] = '\0';
	}
	return (dest);
}
