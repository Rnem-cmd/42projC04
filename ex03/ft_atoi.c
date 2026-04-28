/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradani <rradani@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 19:37:04 by rradani           #+#    #+#             */
/*   Updated: 2026/04/28 16:28:30 by rradani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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
}
/*
int	main(void)
{
	char	str[] = " ---+--+1234ab567";
	//char    str[] = "black567";
	//char    str[] = "+++----6984brciks567";

	printf("%d\n", ft_atoi(str));
}*/
