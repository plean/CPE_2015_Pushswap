/*
** my_getnbr.c for my getnbr in /home/planch_j/rendu/Piscine_C_J04/Piscine_C_J04
** 
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
** 
** Started on  Fri Oct  2 18:58:29 2015 Jean PLANCHER
** Last update Sat Nov 21 16:39:14 2015 Jean PLANCHER
*/

int	get_number(char *str, int nb, int i)
{
  if (str[++i] != 0)
    get_number(str, nb * 10 + (str[i] - 48), i);
  else
    return (nb);
}

int	my_getnbr(char *str)
{
  if (str[0] == '-')
    return(get_number(str, 0, 0) * -1);
  else if (str[0] == 48 && str[1] == 0)
    return (0);
  return(get_number(str, 0, -1));
}
