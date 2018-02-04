/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

#include <unistd.h>

void	my_putchar(char);
int	my_strlen(char const *str);

int	my_putnbr_base(int nbr, char const *base)
{
	int len = my_strlen(base);
	int result;

	if (nbr == 0)
		my_putchar(base[0]);
	if (nbr > 0) {
		result = nbr % len;
		if ((nbr / len) != 0)
			my_putnbr_base((nbr / len), base);
		my_putchar(base[result]);
	}
	return (0);
}
