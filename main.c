/*
** main.c for  in /home/planch_j/rendu/CPE_2015_Pushswap
** 
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
** 
** Started on  Tue Nov  3 11:30:44 2015 Jean PLANCHER
** Last update Sat Nov 21 17:40:07 2015 Jean PLANCHER
*/

#include <stdlib.h>
#include "push_swap_params.h"
#include "my.h"

int	test_all_clean(int *str, int ac)
{
  int	i;

  i = 0;
  while (i + 1 <= ac - 2)
    {
      if (str[i] > str[++i])
	return (0);
    }
  my_putchar('\n');
  return (1);
}

void	push_swap_suite(t_push_swap_params *elem, int e, int ac)
{
  if (e - 1 <= ac / 2)
    {
      ra(elem);
      my_putstr("ra ");
    }
  else
    {
      rra(elem);
      my_putstr("rra ");
    }
}

void	push_swap(t_push_swap_params *elem, int ac)
{
  int	k;
  int	i;
  int	e;

  while (elem->line != 0)
    {
      k = elem->l[elem->line - 1];
      elem->taille = elem->l[0];
      i = -1;
      e = 0;
      while (elem->l[++i - 1] != k)
	{
	  if (elem->l[i] < elem->taille)
	    elem->taille = elem->l[i];
	  e = e + 1;
	}
      while (elem->l[0] != elem->taille)
	push_swap_suite(elem, e, ac);
      pb(elem);
    }
  while (elem->line != ac - 2)
    {
      pa(elem);
      my_putstr("pa ");
    }
}

int			main(int ac, char **av)
{
  t_push_swap_params	*elem;
  int			i;

  elem = malloc(sizeof(elem));
  elem->l = malloc(sizeof(int*) * (ac));
  elem->line = ac - 1;
  elem->pos = 0;
  elem->res[0] = 0;
  i = 0;
  if (ac == 1)
    {
      my_putstr("Error: Enter at least one parameters.\n");
      return (0);
    }
  while (++i < ac)
    elem->l[i - 1] = my_getnbr(av[i]);
  my_putstr(elem->res);
  if (test_all_clean(elem->l, ac) == 0)
    {
      push_swap(elem, ac);
      my_putstr("pa\n");
    }
  return (0);
}
