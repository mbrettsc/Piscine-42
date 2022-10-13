/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:03:00 by mbrettsc          #+#    #+#             */
/*   Updated: 2022/07/24 10:53:07 by mbrettsc         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar(48 + i / 10);
			ft_putchar(48 + i % 10);
			ft_putchar(' ');
			ft_putchar(48 + j / 10);
			ft_putchar(48 + j % 10);
			j++;
			if (i != 98)
			{
				write(1, ",", 1);
			}
		}
		i++;
	}
}
