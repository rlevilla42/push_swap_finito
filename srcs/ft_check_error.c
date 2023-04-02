/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:28:06 by rlevilla          #+#    #+#             */
/*   Updated: 2023/03/19 14:56:42 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_error(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	else if (argc == 2)
	{
		if (check_error_onestr(argv[1]) == 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
	}
	else if (check_error_argv(argc, argv) == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}
