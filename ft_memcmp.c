/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:17:04 by skaragul          #+#    #+#             */
/*   Updated: 2022/11/16 18:09:57 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_buff;
	const unsigned char	*s2_buff;
	size_t				i;

	i = 0;
	s1_buff = (const unsigned char *)s1;
	s2_buff = (const unsigned char *)s2;
	while (i < n)
	{
		if (s1_buff[i] != s2_buff[i])
			return (s1_buff[i] - s2_buff[i]);
			i++;
	}
	return (0);
}
