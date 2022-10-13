/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aekinci <aekinci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:13:34 by aekinci           #+#    #+#             */
/*   Updated: 2022/07/24 16:04:32 by aekinci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		w;
	int		h;

	h = -1;
	while (++h < y && y > 0 && x > 0)
	{
		w = -1;
		while (++w < x)
		{
			if (h == 0 && (w == (x - 1) || w == 0))
				ft_putchar('A');
			else if (h == (y - 1) && (w == 0 || w == (x - 1)))
				ft_putchar('C');
			else if ((w == 0) || (h == 0) || w == (x - 1) || (h == (y - 1)))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
