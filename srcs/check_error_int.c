/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:21:43 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/04 19:19:20 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_error_int_split(char **argv)
{
	long	n;
	int		j;

	j = 0;
	while (argv[j] != NULL)
	{
		n = atol(argv[j]);
		if (n < -2147483648)
			return (0);
		else if (n > 2147483647)
			return (0);
		else
			j++;
	}
	return (1);
}

int	check_error_int_argv(int argc, char **argv)
{
	int		j;
	int		i;
	long	n;

	j = 0;
	i = 0;
	while (i < argc)
	{
		n = atol(argv[j]);
		if (n < -2147483648 || n > 2147483647)
			return (0);
		else
		{
			i++;
			j++;
		}
	}
	return (1);
}
