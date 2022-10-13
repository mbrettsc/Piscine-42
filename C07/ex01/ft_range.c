/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:51:24 by mbrettsc          #+#    #+#             */
/*   Updated: 2022/08/09 17:01:32 by mbrettsc         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*arr;

	if (min >= max)
		return (0);
	len = max - min;
	arr = (int *)malloc(len * sizeof(int));
	if (!arr)
		return (0);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

/*int		main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i = 0;
	int	len;

	min = 5;
	max = 10;
	len = max - min;
	range = ft_range(min, max);
	while(i < len)
	{
		printf("%d ", range[i]);
		i++;
	}
}*/
