/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:14:57 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/28 21:10:52 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);   */

#include <unistd.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
   	int i;
	i = 0;
	while(s1[i]!='\0' && s2[i]!= '\0' && s1[i] == s2[i] )
	{
		i++;
   	}
	return (s1[i] - s2[i]);	
}

int main()
{
	char str1[] = "v";
	char str2[] = "v1";
	if (strcmp(str1, str2) < 0)
	{
		write(1, "h", 1);
	}
}
