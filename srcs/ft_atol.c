/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:26:42 by rlevilla          #+#    #+#             */
/*   Updated: 2023/01/24 15:15:52 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *str)
{
	long	i;
	long	buffer;
	long	countminus;

	i = 0;
	countminus = 1;
	buffer = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			countminus = -1;
		i++;
	}
	if (str[i] < 48 || str[i] > 57)
	{
		write(1, "Error\n", 6);
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		buffer = (buffer * 10) + (str[i] - 48);
		i++;
	}
	return (buffer * countminus);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	long	n;

	n = atol(argv[1]);
	if (n > 2147483647)
	{
		printf("%ld\n", n);
	}
	else if (n < -2147483648)
	{
		printf("%ld\n", n);
	}
	else
		printf("PUTAIN ..\n");
	return (0);
}*/
