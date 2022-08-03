/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:40:33 by manykhac          #+#    #+#             */
/*   Updated: 2022/08/03 16:51:50 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.   */

#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int size = end - start+1;
	int *ptr;
	int i = 0;
	if (size)
	{
		ptr = (int*) malloc(sizeof(int) * size);
		while(start<=end)
		{
			ptr[i] =end;
			i++;
			end--;
		}
		return ptr;
	}
return (NULL);
}


int main()
{
	int i =0;
	int *str = ft_rrange(3,10);
	while(str[i])
	{
		printf("%d", str[i]);
		i++;
	}
}
