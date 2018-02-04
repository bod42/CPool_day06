/*
** EPITECH PROJECT, 2018
** c code
** File description:
** pool
*/

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
