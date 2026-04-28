/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradani <rradani@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 19:23:25 by rradani           #+#    #+#             */
/*   Updated: 2026/04/28 17:14:49 by rradani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}
/*
void	ft_putstr(char *str)
{	
	write(1, str, 1);
	if (*str)
		ft_putstr(str +1);
}

int	main(void)
{
	char	s[] = "Hello";

	ft_putstr(s);
}*/
