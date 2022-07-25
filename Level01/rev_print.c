/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:37:41 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/25 12:09:09 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$ */

#include<unistd.h>

int main(int argc, char *argv)
{
	int 	i;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			i++;
		}
		while (i >= 0)
		{
			write (1, &argv[1][i], 1);
			i--;
		}
	}
	write (1, "\n", 1);
	return 0;
}
