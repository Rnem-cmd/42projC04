/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradani <rradani@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:29:36 by rradani           #+#    #+#             */
/*   Updated: 2026/04/28 19:51:20 by rradani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int	mod;
	int	base_len;
	int	i;

	base_len = 0;
	i = 0;
	if(base[i] || base[i] != base[i +1] || base[i] != '+' || base[i] += '-')
		while (base[base_len]);
			base_len++;
		mod = nbr % base_len;
		ft_putnbr_base(nbr / base_len, base);
		write(1, &mod, 1);
}

int	main(int argc, char *argv)
{
	
}
