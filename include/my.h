/*
** my.h for  in /home/planch_j/rendu/CPE_2015_Pushswap/include
** 
** Made by Jean PLANCHER
** Login   <planch_j@epitech.net>
** 
** Started on  Mon Nov  2 11:19:08 2015 Jean PLANCHER
** Last update Sat Nov 21 16:09:39 2015 Jean PLANCHER
*/

#ifndef MY_H_
# define MY_H_

void	my_putchar(char c);
void	my_putstr(char *str);
int	my_getnbr(char *str);
int	get_number(char *str, int nb, int i);
void	pa(t_push_swap_params *elem);
void	pb(t_push_swap_params *elem);
void	ra(t_push_swap_params *elem);
int	my_strlen(char *str);
int	my_put_nbr(int nb);
void	push_swap(t_push_swap_params *elem, int ac);
int	main(int ac, char **av);
void    push_swap_suite(t_push_swap_params *elem, int e, int ac);
void    my_putin_res(t_push_swap_params *elem, int type);
char    *my_strncat(char *dest, char *src);

#endif /* !MY_H_ */
