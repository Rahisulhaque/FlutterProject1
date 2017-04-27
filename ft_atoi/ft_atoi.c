/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 21:44:07 by rhaque            #+#    #+#             */
/*   Updated: 2017/04/26 22:19:23 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_atoi(char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;

	while (str[i] >= 0 && str[i] <= 32)
	{
		i++;
	}
	while (str[i] == '+' ||  str[i] == '-')
	{
		sign = (str[i] == '+') ? 1 : -1;
		i++;
	}
	while (str[i] >= 48  && str[i] <= 57)
	{
		res = res * 10 + str[i++] - 48;
	}
	res = res * sign;
	return res;
}

int		main()
{
	int i;
	i = ft_atoi("-123456");
	printf("%d \n",i);
	return (0);
}
