/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:52:27 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/21 15:33:42 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		write(1, &str[i], 1);
			i--;
	}
	return (str);
}

int main ()
{
	char str[] = "Manya42";
	ft_rev_print(str);
	return (0);
}
