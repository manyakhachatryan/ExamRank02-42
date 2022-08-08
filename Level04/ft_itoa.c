/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:50:36 by manykhac          #+#    #+#             */
/*   Updated: 2022/08/08 20:57:55 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);   */

#include <stdio.h>
#include <stdlib.h>

int flen(num)
{
	int len = 0;
	if (num == 0)
	{
		return 1;
	}
	if (num < 0)
	{
		len++;
		num *= -1;
	}
	while(num >0)
	{
		num = num / 10;
		len++;
	}
	return len;
}


char *ft_itoa(int nbr)
{
	int len;
	char *str;
	len = flen(nbr);
	str = (char*) malloc(sizeof(char) * len +1);
	if (!str)
	{
		return (NULL);
	}
	if (nbr == -2147483648)
	{
		return ("-2147483648");
	}
	if (nbr == 0)
	{
		str[0] ='0';
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *=-1;
	}
	str[len--] = '\0';
	while(nbr > 0)
	{
		str[len] = nbr %10 + '0';
		nbr = nbr /10;
		len--;
	}
	return str;
}

int main()
{
		int a = 42;
		char *b = ft_itoa(a);
		printf("%s", b);
}

