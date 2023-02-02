/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:36:28 by skaragul          #+#    #+#             */
/*   Updated: 2022/11/21 17:10:11 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	count_sign;
	long	count;

	i = 0;
	count_sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	count_sign = 1;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			count_sign = -1;
		i++;
	}
	count = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		count = (count * 10) + (str[i] - '0');
			i++;
	}
	return (count * count_sign);
}
