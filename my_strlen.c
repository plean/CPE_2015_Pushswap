/*
** my_strlen.c for  in /home/planch_j/rendu/CPE_2015_Pushswap
** 
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
** 
** Started on  Thu Nov 19 11:23:34 2015 Jean PLANCHER
** Last update Thu Nov 19 11:24:19 2015 Jean PLANCHER
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    i = i + 1;
  return (i);
}
