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

void	ft_putnbr_base(int nbr, char *base);
int	ft_strlen(char *str);
void	ft_print_nbr(int nbr, int base_value, char *base);
void	ft_putchar(char c);

int	main()
{
	int	n = 42;
	char	s[] = "poneyvif";

	ft_putnbr_base(n, s);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_value;

	base_value = ft_strlen(base);
	if (base_value < 2)
		return;
	ft_print_nbr(nbr, base_value, base);
	write(1, "\n", 1);
}

int	ft_strlen(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_print_nbr(int nbr, int base_value, char *base)
{
	long	nbrl;

	nbrl = nbr;
	if (nbrl <  0)
	{
		nbrl = -nbrl;
		ft_putchar('-');
	}

	if (nbrl >= base_value)
		ft_print_nbr(nbrl / base_value, base_value, base);
	ft_putchar(base[nbrl % base_value]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);

}
