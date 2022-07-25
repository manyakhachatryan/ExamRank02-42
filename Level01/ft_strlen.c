/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:15:29 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/25 12:05:20 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a function that returns the length of a string.
Your function must be declared as follows:
int	ft_strlen(char *str); */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}

int	main()
{
	int		result;
	char str[] = "Manya42";
	result = ft_strlen(str);
	printf("%d", result);
	return 0;
}
