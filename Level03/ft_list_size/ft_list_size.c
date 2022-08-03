/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:27:34 by manykhac          #+#    #+#             */
/*   Updated: 2022/08/03 13:54:11 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : ft_list_size
Expected files   : ft_list_size.c, ft_list.h
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;    */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int size = 0;
	if (begin_list == 0)
	{
		return 0;
	}
	else
	{
		while(begin_list)
		{
			begin_list = begin_list->next;
			size++;
		}
   	}
return size;
}
