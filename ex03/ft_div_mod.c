/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 00:38:55 by lukorman          #+#    #+#             */
/*   Updated: 2024/08/20 23:26:41 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	divr;
	int	modr;

	divr = a / b;
	modr = a % b;
	*div = divr;
	*mod = modr;
}

/*int	main(void)
{
	int	divr;
	int	modr;

	ft_div_mod(5, 2, &divr, &modr);
	printf("Result: %d.\nRest: %d.", divr, modr);
	return (0);
}*/
