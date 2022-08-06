/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:10:04 by manykhac          #+#    #+#             */
/*   Updated: 2022/08/06 14:46:00 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* iAssignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);     */   


#include <stdio.h>

int digit (char c)
{
	int num;
	if (c >= '0' && c <= '9')
	{
		num = c - '0';
	}
	else if (c >= 'a' && c <= 'f')
	{
		num = c- '0' -39;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		num  = c - '0' -7;
	}
	return num;
}

 
int ft_atoi_base(const char *str, int str_base)
{
	int result=0;
	int i=0;
	int sign = 1;
	int c;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i])
	{
		c = digit(str[i]);
		result = result * str_base + c; 
		i++;
	}
	return result * sign;
}

int main(){
	char str[] = "f1";
	int base = 16;
	int result = ft_atoi_base(str, base);
	printf("%d\n", result);
}
