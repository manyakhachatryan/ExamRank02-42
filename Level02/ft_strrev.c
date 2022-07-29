/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:22:13 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/29 21:38:55 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* iAssignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);   */

#include <stdio.h>

char *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char temp;
	
	while(str[i]!='\0')
	{
		i++;
	}
	i--;
	while(j < i)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		j++;
		i--;
	}
	return (str);
}

int main()
{
	char str[] = "Manya42";
	char *result = ft_strrev(str);
	printf("%s" , result);
}
