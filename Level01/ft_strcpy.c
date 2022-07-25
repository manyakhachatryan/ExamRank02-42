/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:00:06 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/25 15:24:57 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2); */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s2[i]!='\0')
	{
		s1[i] = s2[i];
		i++;
	}
s1[i] = '\0';
return (s1);
}

int main(){
char s1[] = "Manya";
char s2[] = "42";
char *result = ft_strcpy(s1, s2);
printf("%s", result);
}
