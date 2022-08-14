/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:49:30 by manykhac          #+#    #+#             */
/*   Updated: 2022/08/14 19:13:25 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions: 
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.   */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int tmp;
	
	while( i< (size-1))
	{
		if (tab[i] >tab[i+1])
		{
			tmp = tab[i];
			tab[i] = tab[i+1];
			tab[i+1] = tmp;
			i = 0;
		}
		else i++;
	}
}


int main()
{
	int tab[5];
	tab[0] = 2;
	tab[1] = 1;
	tab[2] = 4;
	tab[3] = 6;
	tab[4] = 8;
	sort_int_tab(tab, 5);
	int i= 0;
	while(i < 5 )
	{
		printf("%d", tab[i]);
		i++;
	}
}
