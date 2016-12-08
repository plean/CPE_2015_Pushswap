/*
** my_put_nbr.c for my put nbr in /home/planch_j/rendu/Piscine_C_J03/Piscine_C_J03
** 
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
** 
** Started on  Fri Oct  2 18:55:40 2015 Jean PLANCHER
** Last update Fri Oct  2 18:55:42 2015 Jean PLANCHER
*/

int	my_put_nbr(int nb)
{
  int	neg;

  neg = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == -2147483648)
	{
	  neg = 1;
	  nb = nb + 1;
	}
      nb = nb * -1;
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
    }
  my_putchar(nb % 10 + '0' + neg);
  return (0);
}
