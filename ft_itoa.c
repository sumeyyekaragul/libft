/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:31:58 by skaragul          #+#    #+#             */
/*   Updated: 2022/11/22 16:14:27 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int a)
{
	int	i;

	i = 0;
	if (a <= 0)
		i = 1;
	while (a != 0)
	{
		a /= 10;
		i++;
	}
	return (i);
}

static void	ft_fill(char *str, int nb, int size, int start)
{
	while (size > start)
	{
		str[size -1] = ((nb % 10) + 48);
		nb = nb / 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		start;
	int		size;

	size = ft_size(n);
	start = 0;
	str = ((char *)malloc(sizeof(char) * size + 1));
	if (!str)
		return (NULL);
	if (n == -2147483648)
	{
		start = 2;
		*(str + 0) = '-';
		*(str + 1) = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		start = 1;
		*(str + 0) = '-';
		n = -n;
	}
	str[size] = 0;
	ft_fill(str, n, size, start);
	return (str);
}
