/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 22:30:14 by lukorman          #+#    #+#             */
/*   Updated: 2024/08/20 23:24:39 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	valuea;
	int	valueb;

	valuea = 12;
	valueb = 8;
	printf("Value in 'a': %d.\nValue in 'b': %d.\n\n", valuea, valueb);
	ft_swap(&valuea, &valueb);
	printf("New value in 'a': %d.\nNew value in 'b': %d.", valuea, valueb);
	return (0);
}*/
