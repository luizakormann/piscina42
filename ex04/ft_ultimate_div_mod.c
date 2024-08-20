/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukorman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 02:44:31 by lukorman          #+#    #+#             */
/*   Updated: 2024/08/20 16:28:03 by lukorman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
	int	divr;
	int	modr;
	
	divr = *a / *b;
	modr = *a % *b;

        *a = divr;
        *b = modr;
}

/*int   main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 2;
        ft_ultimate_div_mod(&a, &b);
        printf("Result: %d.\nRest: %d.", a, b);
        return (0);
}*/
