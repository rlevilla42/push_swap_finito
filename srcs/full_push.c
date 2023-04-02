/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:27:17 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/24 14:52:23 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	full_push_a(t_stack a, t_stack b, int fois)
{
	int	i;

	i = 0;
	while (i < fois)
	{
		pa_push_a(a, b);
		i++;
	}
	return ;
}

void	full_push_b(t_stack a, t_stack b, int fois)
{
	int	i;

	i = 0;
	while (i < fois)
	{
		pb_push_b(a, b);
		i++;
	}
	return ;
}
