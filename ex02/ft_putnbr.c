/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradani <rradani@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:12:21 by rradani           #+#    #+#             */
/*   Updated: 2026/04/27 19:34:30 by rradani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	numb[10];
	long	nbl;
	int		i;

	nbl = nb;
	i = 0;
	if (nbl == 0)
	{
		write(1, "0\n", 2);
		return ;
	}
	if (nbl < 0)
	{
		nbl *= -1;
		write(1, "-", 1);
	}
	while (nbl > 0)
	{
		numb[i++] = (nbl % 10) + 48;
		nbl /= 10;
	}
	while (i > 0)
		write(1, &numb[--i], 1);
	write(1, "\n", 1);
}
/*
int	main(void)
{
//	ft_putnbr(42);

	//min value a signed integer can store
//	ft_putnbr(-2147483648);

	//max value a signed int can store
//	ft_putnbr(2147483647);
}*/
