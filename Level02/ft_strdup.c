/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 19:27:20 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/29 19:57:25 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* voAssignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);   */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i = 0;

	while(src[i]!= '\0')
	{
		i++;
	}
	char *ptr = (char*)malloc(sizeof(char) * i + 1);
	if (!ptr)
	{
		return (0);
	}
	i = 0;
	while(src[i]!='\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int main()
{
	char str1[] = "Manya42";
	char *result1 = strdup(str1);
	char *result2 = ft_strdup(str1);
	printf("%s\n", result1);
	printf("%s\n", result2);
}
