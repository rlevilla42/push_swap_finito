/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:20:33 by rlevilla          #+#    #+#             */
/*   Updated: 2023/03/18 23:00:38 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack a)
{
	if (a.tab[0] == 1)
		swap_a(a);
	return ;
}

void	sort_four_help(t_stack a)
{
	if (a.tab[0] == 1 && a.tab[1] == 3 && a.tab[2] == 2)
	{
		reverse_rotate_a(a);
		swap_a(a);
	}
	else if (a.tab[0] == 2 && a.tab[1] == 3 && a.tab[2] == 1)
		reverse_rotate_a(a);
	else if (a.tab[0] == 2 && a.tab[1] == 1 && a.tab[2] == 3)
		swap_a(a);
	else if (a.tab[0] == 3 && a.tab[1] == 1 && a.tab[2] == 2)
		rotate_a(a);
	else if (a.tab[0] == 3 && a.tab[1] == 2 && a.tab[2] == 1)
	{
		swap_a(a);
		reverse_rotate_a(a);
	}
}

void	sort_four(t_stack a, t_stack b)
{
	while (a.tab[0] != 0)
		rotate_a(a);
	pb_push_b(a, b);
	sort_four_help(a);
	full_push_a(a, b, b.size[0]);
	return ;
}
