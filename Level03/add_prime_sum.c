/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:40:33 by manykhac          #+#    #+#             */
/*   Updated: 2022/08/02 16:00:16 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>   */

#include <unistd.h>
void printNum(int number)
{
	char str[] = "0123456789";
	if (number > 9)
	{
		printNum(number / 10);
	}
	write (1, &str[number % 10], 1);
}

int isPrime(number)
{ 
	int i = 2;
	while(i < number)
	{
		if (number % i != 0)
		{
			i++;
		}
		else
		{
			return 0;
		}
	}
return 1;
}

int sumPrime(num)
{
	int sum = 0;
	int i=2;
	while(i <= num)
	{
		if (isPrime(i) == 1)
		{
			sum = sum + i;
		}
		i++;
	}
return sum;
}

int createNum(char *str)
{
	int i=0;
	int num = 0;
	while(str[i])
	{
		num = num*10 +str[i] - '0';
		i++;
	}
	return num;
}

int main(int argc, char **argv)
{
	int sum = 0;
	if(argc == 2 && argv[1][0] != '-')
	{
		int  num = createNum(argv[1]);
		sum = sumPrime(num);
		printNum(sum);	
	}
	else
	{
		write(1, "0", 1);
	}
	write (1,"\n",1);
}
