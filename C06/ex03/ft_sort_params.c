/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:48:29 by mabarros          #+#    #+#             */
/*   Updated: 2025/02/04 20:07:45 by mabarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	g_n = 1;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*third_cup;

	third_cup = *a;
	*a = *b;
	*b = third_cup;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2 || *s1 < *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	w;

	w = 0;
	while (!w)
	{
		i = 1;
		w = 1;
		while (i < (argc - 1))
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				w = 0;
			}
			i++;
		}
	}
	while (g_n <= argc -1)
	{
		ft_putstr(argv[g_n]);
		ft_putchar('\n');
		g_n++;
	}
}
