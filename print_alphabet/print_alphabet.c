/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_alphabet.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 20:23:09 by rhaque            #+#    #+#             */
/*   Updated: 2017/04/26 21:19:14 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// We have to know that the ASCII value of (A-B) is 65-90 and (a-b) (97-122)

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		main()
{
	int i;
	int n;

	i = 65;
	n = 97;
	while (i <= 90)
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
	while (n <= 122)
	{
		ft_putchar(n);
		n++;
	}
	ft_putchar(10);
	return (0);
}

