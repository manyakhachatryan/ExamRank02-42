/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:39:55 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/25 15:59:14 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead. */

#include <unistd.h>

int printNum(number)
{
	char str[10] = "0123456789";
	if (number > 9)
	printNum(number / 10);
	write(1, &str[number % 10], 1);
	return 0;
}

int main()
{
	
	int i;
	for(i = 1; i <= 100; i++)
	{
		if (i %3 == 0)
		{
			write (1, "fizz", 5);
		}
		else if (i % 5 == 0)
		{
			write (1, "buzz", 5);
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			write (1, "fizzbuzz", 9);
		}
		else 
		{
			printNum(i);
		}
		write(1, "\n", 1);
	}
	return 0;
}
