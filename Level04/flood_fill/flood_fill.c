/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manykhac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 15:15:01 by manykhac          #+#    #+#             */
/*   Updated: 2022/08/09 15:43:17 by manykhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : flood_fill
Expected files   : *.c, *.h
Allowed functions: -
--------------------------------------------------------------------------------

Write a function that takes a char ** as a 2-dimensional array of char, a 
t_point as the dimensions of this array and a t_point as the starting point.

Starting from the given 'begin' t_point, this function fills an entire zone 
by replacing characters inside with the character 'F'. A zone is an group of 
the same character delimitated horizontally and vertically by other characters
or the array boundry.

The flood_fill function won't fill diagonally.

The flood_fill function will be prototyped like this:
  void  flood_fill(char **tab, t_point size, t_point begin);

The t_point structure is prototyped like this:

  typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;  */

#include "flood_fill.h"

void fill(char **tab, t_point size, t_point cur, to_fill)
{
	if (cur.x < 0 || cur.x >=size.x || cur.y <0 || cur.y >= size.y || tab[cur.y][cur.x]!= to_tofill)
		return;
	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.x-1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x+1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y-1}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y+1}, to_fill);
}


void flood_fill (char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x] );
}

