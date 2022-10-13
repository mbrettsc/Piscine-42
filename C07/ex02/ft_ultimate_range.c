/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:00:08 by mbrettsc          #+#    #+#             */
/*   Updated: 2022/08/09 17:10:49 by mbrettsc         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*d;

	if (min >= max)
		return (0);
	len = max - min;
	d = (int *)malloc(len * sizeof(int));
	if (!d)
		return (-1);
	*range = d;
	i = 0;
	while (i < len)
	{
		d[i] = min;
		min++;
		i++;
	}
	return (len);
}

/*int		main(void)
{
	int	min;
	int	max;
	int	*range;
	int	len;
	int	i = 0;

	min = 5;
	max = 10;
	len = ft_ultimate_range(&range, min, max);
	while(i < len)
	{
		printf("%d ", range[i]);
		i++;
	}

}*/
