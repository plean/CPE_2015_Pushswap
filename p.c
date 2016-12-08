/*
** p.c for  in /home/planch_j/rendu/CPE_2015_Pushswap
** 
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
** 
** Started on  Mon Nov  2 18:07:56 2015 Jean PLANCHER
** Last update Sat Nov 21 16:32:47 2015 Jean PLANCHER
*/

#include "push_swap_params.h"

void	pa(t_push_swap_params *elem)
{
  int	i;
  int	k;

  i = 0;
  k = elem->l[elem->line];
  while (i != elem->line)
    elem->l[++i] = elem->l[i - 1];
  elem->l[0] = k;
  elem->line = elem->line + 1;
}

void	pb(t_push_swap_params *elem)
{
  int   i;
  int   k;

  i = 0;
  k = elem->l[i];
  my_putstr("pb ");
  while (i != elem->line)
      elem->l[i] = elem->l[++i];
  elem->l[i] = k;
  elem->line = elem->line - 1;
}
