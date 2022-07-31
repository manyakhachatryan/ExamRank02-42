/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:31:02 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/31 20:15:23 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e
forty two$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$    */

#include <unistd.h>

int check(int c, char *str, int index)
{
	int i = index;
	while(str[i]!='\0')
	{
		if (str[i]==c)
		{
			return i;
		}
		i++;
	}
	return 0;
}

int main(int argc, char **argv)
{	
	int index = 0 ;
	int i = 0;
	int k =0;
	if (argc ==3)
	{
		while(argv[1][i]!='\0')
		{ 
			index = check(argv[1][i], argv[2], index);
			if (index!=0 || (index==0 &&  i==0))
				i++;
			else 
			{
				break;
			}
		}
		while(argv[1][k]!='\0')
		{
			k++;
		}
		if (i == k)
		{
			k = 0;
			while(argv[1][k]!='\0')
			{
				write (1, &argv[1][k],1);
				k++;
			}
		}
	}	
write (1, "\n",1);
}
