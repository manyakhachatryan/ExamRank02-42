/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:07:03 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/30 16:50:22 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$    */

#include <unistd.h>
int check(int c, char *str, int index)
{
	int i = 0;
	while(str[i] && i < index)
	{
		if (str[i] == c)
			return 1;
		i++;	
	}
return 0;
}

int main(int argc, char **argv)
{
	int i = 0;
	int j;
	int checkDouble;
	if(argc == 3)
	{
		while(argv[1][i] != '\0')
		{
			checkDouble = check(argv[1][i], argv[1], i);
			if (checkDouble == 0)
			{
				j = 0;
				while(argv[2][j] != '\0')
				{
					if (argv[2][j] == argv[1][i])
					{ 
						write (1, &argv[1][i], 1);
						break;
					}
					j++;
				}
			}
			i++;
		}
	}
	write (1, "\n", 1);
}
