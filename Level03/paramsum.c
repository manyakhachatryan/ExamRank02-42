/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:44:14 by manykhac          #+#    #+#             */
/*   Updated: 2022/08/02 19:00:15 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>   */

#include <unistd.h>

void printNum(int num)
{
	char result;
	if (num > 9)
		printNum(num / 10);
	result = num%10 +'0';
	write (1, &result, 1);
}


int main(int argc, char **argv)
{ 
	int i = 0;
	i = argc - 1;
	printNum(i);
	write (1, "\n", 1);
}
