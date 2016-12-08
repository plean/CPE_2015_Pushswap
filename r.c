/*
** r.c for  in /home/planch_j/rendu/CPE_2015_Pushswap
** 
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
** 
** Started on  Mon Nov  2 18:28:57 2015 Jean PLANCHER
** Last update Fri Nov 20 11:56:29 2015 Jean PLANCHER
*/

#include "push_swap_params.h"

void	ra(t_push_swap_params *elem)
{
  int	i;
  int	k;

  i = 0;
  k = elem->l[i];
  while (i != elem->line - 1)
    elem->l[i] = elem->l[++i];
  elem->l[i] = k;
}

void	rra(t_push_swap_params *elem)
{
  int	i;
  int	k;

  i = elem->line - 1;
  k = elem->l[elem->line - 1];
  while (i != 0)
    {
      elem->l[i] = elem->l[i - 1];
      i = i - 1;
    }
  elem->l[i] = k;
}
