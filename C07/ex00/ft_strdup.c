/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrettsc <mbrettsc@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:41:47 by mbrettsc          #+#    #+#             */
/*   Updated: 2022/08/09 18:01:51 by mbrettsc         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		slen;
	int		i;

	slen = ft_strlen(src);
	str = (char *)malloc(slen * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World!";
	printf("%s %p\n", str, str);
	allocated = ft_strdup(str);
	printf("%s %p\n", allocated, allocated);
}*/
