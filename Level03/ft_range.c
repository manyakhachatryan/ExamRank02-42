/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:10:04 by manykhac          #+#    #+#             */
/*   Updated: 2022/08/03 16:23:04 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
Footer
   */ 

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int size = end - start;
	int *ptr;
	int *ret;
	if (size)
	{
		ptr  = (int*) malloc(sizeof(int) * size);
		if(ptr)
		{
			ret  = ptr;
			while(start <= end)
			{
				*ptr = start;
				ptr++;
				start++;
			}
			return ret;
		}
	}
	return (NULL);
}

int main()
{
	int i = 0;
	int *str = ft_range(3,10);
	while(str[i])
	{
		printf("%d", str[i]);
		i++;
	}
}
