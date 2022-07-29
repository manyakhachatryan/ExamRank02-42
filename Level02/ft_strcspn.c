/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:14:57 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/29 16:10:47 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);    */

#include <stdio.h>
#include <string.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j;
	while(s[i] != '\0')
	{
		j = 0;
		while(reject[j] != '\0')
		{
			if (s[i] != reject[j])
			{
				j++;
			}
			else if (s[i] == reject[i])
			{
				return (i);
			}
		}
		i++;
	}
	int k = 0;
	while(s[k] != '\0')
	{
		k++;
	}
	return (k);
}

int main()
{
	char str1[] = "Manya";
	char str2[] = "42";
	int result1 = strcspn(str1, str2);
	int result2 = ft_strcspn(str1, str2);
	printf("%d\n", result1);
	printf("%d", result2);
}
