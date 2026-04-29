/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradani <rradani@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:29:36 by rradani           #+#    #+#             */
/*   Updated: 2026/04/29 15:54:55 by rradani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		ft_strlen(char *str);
void	ft_print_nbr(int nbr, int base_value, char *base);
void	ft_putchar(char c);
//int		ft_atoi(char *str);
/*
int	main(int argc, char **argv)
{
	int	n = ft_atoi(argv[1]);
	char	*s = argv[2];

	ft_putnbr_base(n, s);
}*/

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_value;

	base_value = ft_strlen(base);
	if (base_value < 2)
		return ;
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
	if (nbrl < 0)
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
/*
int	ft_atoi(char *str)
{
	int	number;
	int	neg_count;

	number = 0;
	neg_count = 0;
	while ((*str >= 9 && *str <= 13)
		|| *str == ' ' || *str == '-' || *str == '+')
	{
		if (*str == '-')
			neg_count++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *str - 48;
		str++;
	}
	if (neg_count % 2 == 0)
		return (number);
	else
		return (-number);
}*/
