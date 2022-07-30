/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:53:52 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/30 17:04:48 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);     */

#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	int num = 1;
	while(num <= n)
	{
		if (num == n)
		{
			return 1;
		}
		num = num * 2;
	}
	return 0;
}

int main()
{
	int num = 42;
	int result = is_power_of_2(num);
	printf("%d", result);
}
