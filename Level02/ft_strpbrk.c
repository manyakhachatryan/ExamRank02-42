/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 20:00:03 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/29 21:17:12 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);    */

#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	if (!s1 || !s2)
	{
		return (0);
	}
	while(*s1)
	{
		int i = 0;
	   	while(s2[i])
		{
			if(*s1 == s2[i])
				return (char *) s1;
			i++;
		}
		s1++;	
	}
return 0;
}


int main()
{
	char str1[] = "Manya42";
	char str2[] = "42";
	char *result1 = strpbrk(str1, str2);
	char *result2 = ft_strpbrk(str1, str2);
	printf("%s\n", result1);
	printf("%s\n", result2);
}
