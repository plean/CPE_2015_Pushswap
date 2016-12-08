/*
** my_strcat.c for  in /home/planch_j/rendu/Piscine_C_J07/ex_02
** 
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
** 
** Started on  Tue Oct  6 18:58:40 2015 Jean PLANCHER
** Last update Sat Nov 21 16:22:16 2015 Jean PLANCHER
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  while (dest[i] != '\0')
    {
      i = i + 1;
    }
  j = 0;
  while (src[j] != '\0')
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
      if (i == 95)
	{
	  my_putstr_quick(dest, i);
	  dest[0] = 0;
	  i = 0;
	}
    }
  dest[i] = '\0';
  my_putstr(dest);
  return (dest);
}
