/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:45:14 by manykhac          #+#    #+#             */
/*   Updated: 2022/08/06 18:07:51 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$   */

#include <unistd.h>

void print_hex(int num)
{
	char c[16] = "0123456789abcdef";
	if (num >= 16)
		print_hex(num / 16);
	write (1, &c[num%16], 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num = 0;
		int i = 0;
		while(argv[1][i])
		{
			num = num * 10 +  argv[1][i] - '0';
			i++;
		}
		print_hex(num);
	}
	write (1, "\n", 1);
}
