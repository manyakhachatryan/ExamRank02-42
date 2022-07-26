/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:00:50 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/26 19:28:48 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>   */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 65 && argv[1][i] <= 77) || (argv[1][i] >= 97 && argv[1][i] <= 109))
			{
				argv[1][i] = argv[1][i] + 13;
			}
			else if ((argv[1][i] >= 78  && argv[1][i] <= 90) || (argv[1][i] >= 110  && argv[1][i] <= 123))
			{
				argv[1][i] = argv[1][i] - 13;
			}
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
