/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sousa <sousa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 08:02:55 by sousa             #+#    #+#             */
/*   Updated: 2025/02/06 08:43:39 by sousa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i <= (argc - 1))
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}*/