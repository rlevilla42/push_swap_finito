/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_argv.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:15:32 by rlevilla          #+#    #+#             */
/*   Updated: 2023/03/19 14:54:21 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
#include <string.h>

int	check_wrong_value(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		if (argv[j][i] == '-' || argv[j][i] == '+')
			i++;
		if (argv[j][i] >= 48 && argv[j][i] <= 57)
		{
			while (argv[j][i] != '\0')
			{
				if (argv[j][i] < 48 || argv[j][i] > 57)
					return (0);
				i++;
			}
		}
		else
			return (0);
		i = 0;
		j++;
	}
	return (1);
}

int	check_duplicates(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 2;
	if (!argv[2])
		return (1);
	while (i < (argc - 1))
	{
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	check_error_argv(int argc, char **argv)
{
	if (check_error_int_argv(argc, argv) == 0)
		return (0);
	else if (argc < 2)
		return (0);
	else if (check_wrong_value(argc, argv) == 0)
		return (0);
	else if (check_duplicates(argc, argv) == 0)
		return (0);
	else
		return (1);
}
/*
int main(int argc, char **argv)
{
	check_error(argc, argv);
}*/
