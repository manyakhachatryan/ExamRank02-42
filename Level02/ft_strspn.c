/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:44:46 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/30 15:07:32 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);   */

#include <string.h>
#include <stdio.h>

int check(int  s, const char *accept)
{
	int i = 0;
	while(accept[i]!='\0')
	{
		if (s == accept[i])
		{
			return (1);
		}
		i++;
	}
	return 0;
}

size_t ft_strspn(const char *s, const char *accept)
{   
	int i;
	size_t count = 0;
	while(s[i] != '\0')
	{
		if (check(s[i], accept) == 0)
			break;
		count++;
		i++;
	}
	return count;	
}

int main()
{
	char str1[] = "Manya";
	char str2[] = "42";
	char result1 = strspn(str1, str2);
	char result2 = ft_strspn(str1, str2);
	printf("%d\n", result1);
	printf("%d\n", result2);
}
