/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_onestr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:31:40 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/04 19:46:08 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_onestr_value(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-' || s[i] == '+')
			i++;
		if (s[i] >= 48 && s[i] <= 57)
		{
			while (s[i] >= 48 && s[i] <= 57)
				i++;
		}
		else
			return (0);
		if (s[i] == 32)
			i++;
		else if (s[i] == 0)
			break ;
		else
			return (0);
		if (s[i] == 0)
			return (0);
	}
	return (1);
}

int	check_duplicates_split(char **ptrptrs)
{
	int	j;
	int	j2;

	j = 0;
	j2 = 1;
	while (ptrptrs[j + 1] != NULL)
	{
		while (ptrptrs[j2] != NULL)
		{
			if (ft_strcmp(ptrptrs[j], ptrptrs[j2]) == 0)
				return (0);
			j2++;
		}
		j++;
		j2 = j + 1;
	}
	return (1);
}

int	check_error_onestr(char *str)
{
	char	**ptrptrs;

	ptrptrs = ft_split(str, ' ');
	if (!ptrptrs)
		return (0);
	if (check_error_int_split(ptrptrs) == 0)
	{
		free_ptr(ptrptrs);
		return (0);
	}
	if (check_onestr_value(str) == 0)
	{
		free_ptr(ptrptrs);
		return (0);
	}
	else if (check_duplicates_split(ptrptrs) == 0)
	{
		free_ptr(ptrptrs);
		return (0);
	}
	free_ptr(ptrptrs);
	return (1);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	if (check_error_onestr(argv[1]) == 0)
	{
		write(1, "CHECK ERROR GOOD\n", 17);
		return (0);
	}
	else
		write(1, "All BUENO ??\n", 13);
	return (0);
}*/
