/*
** my_putstr.c for my putstr in /home/planch_j/rendu/Piscine_C_J04/Piscine_C_J04
** 
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
** 
** Started on  Fri Oct  2 18:58:58 2015 Jean PLANCHER
** Last update Sat Nov 21 16:18:31 2015 Jean PLANCHER
*/

int	my_putstr(char *str)
{
  int	n;

  n = 0;
  while (str[n] != '\0')
    {
      my_putchar(str[n]);
      n = n + 1;
    }
  return (0);
}

int	my_putstr_quick(char *str, int i)
{
  write (1, str, i);
}
