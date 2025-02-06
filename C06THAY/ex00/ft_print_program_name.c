/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sousa <sousa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 07:26:35 by sousa             #+#    #+#             */
/*   Updated: 2025/02/06 07:57:52 by sousa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i = 0;
	
	while (argv[0][i]) //enquanto a string nao for nulo ponto
	{
		write(1, &argv[0][i], 1);// ponteiro percorrendo os caracteres da string
		i++;
	}
	write(1, "\n", 1); // quebra de linha
	return (0); //sucesso na execução
}
