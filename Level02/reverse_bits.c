/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:50:50 by manykhac          #+#    #+#             */
/*   Updated: 2022/08/05 17:59:18 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100  0001
     ||
     \/
 1000  0010  */


unsigned char reverse_bits(unsigned char octet)
{
	int 		  i = 8;
	unsigned char result = 0;
	while(i > 0)
	{
		result = result * 2 + (octet % 2);
		octet  = octet / 2;
		i--;
	}
	return result;
}
