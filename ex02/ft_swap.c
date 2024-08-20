/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 22:30:14 by lukorman          #+#    #+#             */
/*   Updated: 2024/08/19 23:56:34 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função que troque o conteúdo de dois inteiros cujos endereços são
// dados como parâmetros.
// • Ela deverá ser prototipada da seguinte maneira:
// void ft_swap(int *a, int *b);

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	valuea;
	int	valueb;

	valuea = 12;
	valueb = 8;
	printf("Valor em 'a': %d.\nValor em 'b': %d.\n\n", valuea, valueb);
	ft_swap(&valuea, &valueb);
	printf("Novo valor em 'a': %d.\nNovo valor em 'b': %d.", valuea, valueb);
	return (0);
}
