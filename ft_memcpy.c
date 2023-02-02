/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:19:48 by skaragul          #+#    #+#             */
/*   Updated: 2022/11/22 16:38:49 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_buff;
	const char	*src_buff;

	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dst_buff = (char *)dst;
	src_buff = (const char *)src;
	while (n--)
		dst_buff[n] = src_buff[n];
	return (dst);
}
