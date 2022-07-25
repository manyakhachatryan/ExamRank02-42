/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:51:59 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/25 12:06:56 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str); */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
	}

}
int main(){
	char str[] = "Manya42";
	ft_putstr(str);
	return 0;
}

