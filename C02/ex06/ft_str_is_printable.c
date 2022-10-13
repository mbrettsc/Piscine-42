/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:37:21 by mbrettsc          #+#    #+#             */
/*   Updated: 2022/07/27 19:40:23 by mbrettsc         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str [i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main()
{
	printf("%d", ft_str_is_printable("ABDELKFSCO?I340990%"));
	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}*/
