/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:25:12 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/25 12:08:10 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);*/

void	ft_swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
