/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:07:08 by manykhac          #+#    #+#             */
/*   Updated: 2022/08/06 18:54:54 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : tab_mult
Expected files   : tab_mult.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>   */

#include <unistd.h>

void printNum(num)
{
	if(num > 9)
		printNum(num/10);
	num = num % 10 + '0';
	write (1, &num, 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int num = 0;
		while(argv[1][i])
		{
			num = num * 10 + argv[1][i] - '0';
			i++;
		}
		int index = 1;
		while(index <= 9)
		{
			printNum(index);
			write (1, "x", 1);
			printNum(num);
			write (1, "=", 1);
			int result = index * num;
			printNum(result);
			index++;
			write (1, "\n", 1);
		}
	}
	else 
	{
		write (1, "\n", 1);
	}
}
