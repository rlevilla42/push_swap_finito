/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:59:53 by rlevilla          #+#    #+#             */
/*   Updated: 2023/03/18 15:37:48 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int	*tab;
	int	*size;
}	t_stack;

void	ft_putint(int *tab, int size);
void	ft_putint_str(int *tab);
int		ft_atoi(const char *str);
long	ft_atol(const char *str);
//int	*ft_intcpy(int *tab, int argc);
int		ft_strcmp(char *s1, char *s2);
int		ft_check_duplicates(int argc, char **argv);
int		ft_check_error(int argc, char **argv);
int		check_error_argv(int argc, char **argv);
int		check_wrong_value(int argc, char **argv);
char	**ft_split(char const *s, char c);
int		check_onestr_value(char *s);
int		check_wrong_onestr_value(char **ptrptrs);
int		check_duplicates_split(char **ptrptrs);
int		check_error_onestr(char *str);
int		check_error_int_split(char **argv);
int		check_error_int_argv(int argc, char **argv);
int		countstr(char **ptrstr);
//int		*ft_intput_int_split(char *str);
//int		*ft_intput_int_argv(int argc, char **argv);
int		*ft_input(int argc, char **argv);
char	**argv_to_split(int argc, char **argv);
char	**one_str_to_split(char *str);
int		size_tab(char **ptrstr);
int		*ft_split_to_int(int argc, char **argv);
int		*ft_convert_tab_to_index(int *tab, int size_a);
int		*final_tab(int argc, char **argv, int size_a);
int		*ft_sort_tabcpy(int *tab, int size_a);
int		a_is_sorted(int *tab, int size);
int		ft_tabsize(int *tab);
void	swap_a(t_stack a);
void	swap_b(t_stack b);
void	ss_swap_ss(t_stack a, t_stack b);
void	pb_push_b(t_stack a, t_stack b);
void	pa_push_a(t_stack a, t_stack b);
int		*ft_ptrsize_tab(int argc, char **argv);
void	aff_stack(t_stack a, t_stack b);
void	aff_a(t_stack a);
void	aff_b(t_stack b);
int		*bsize(int argc, char **argv);
void	rotate_a(t_stack a);
void	rotate_b(t_stack b);
void	r_rotate(t_stack a, t_stack b);
void	full_push_a(t_stack a, t_stack b, int fois);
void	full_push_b(t_stack a, t_stack b, int fois);
void	reverse_rotate_a(t_stack a);
void	reverse_rotate_b(t_stack b);
void	r_reverse_rotate(t_stack a, t_stack b);
void	sort_first(t_stack a, t_stack b);
void	big_sort(t_stack a, t_stack b);
void	little_sort(t_stack a, t_stack b);
void	sort_four(t_stack a, t_stack b);
void	sort_two(t_stack a);
void	free_ptr(char **ptrstr);
void	free_stack(t_stack a, t_stack b);

#endif
