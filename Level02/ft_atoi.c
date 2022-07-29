/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:14:57 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/29 15:30:41 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int ft_atoi(const char *str);    */


#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)

{
	int i;
	i = 0;
	int num=0;
	int neg = 1;
	if (!str)
		return (0);
	while(str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f' || str[i]== ' ' )
	{
		i++;
	}
	if (str[i] =='-')
	{
		neg = -1;
		i++;
	}
	else if (str[i] =='+')
	{
		i++;
	}
	while(str[i]!= '\0' && str[i] >= 48 && str[i] <=57) 
	{
		num= num*10+ str[i]- '0';
		i++;
	}
	return (num*neg);
}  

int main()
{
	char str[] = "-42Manya";
	int num = ft_atoi(str);
	int num1 = atoi(str);
	printf("%d\n", num1);
	printf("%d", num);
}
