/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:14:57 by manykhac          #+#    #+#             */
/*   Updated: 2022/07/28 20:12:36 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$     
                                   */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
   	if (argc == 4)
   	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[3]);
		char op = argv[2][0];
		int res;
		if (op == '+')
			res = num1 + num2;
		else if (op == '-')
			res = num1 - num2;
		else if (op == '/')
			res = num1/num2;
		else if(op == '*')
			res  = num1*num2;
		else if (op == '%')
			res  = num1%num2;
	printf("%d\n", res);
	}
	else
   	{
		write (1, "\n", 1);
	}
}
