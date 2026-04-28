/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rradani <rradani@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 19:22:29 by rradani           #+#    #+#             */
/*   Updated: 2026/04/28 17:06:44 by rradani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
int	ft_strlen_rec(char *str)
{
	if(!*str)
		return 0;
	return ft_strlen_rec(str + 1) + 1;
}

int	main(void)
{
	char	str[] = "Word";
	printf("len: %d\n", ft_strlen_rec(str));
}*/
