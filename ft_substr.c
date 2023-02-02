/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:22:25 by skaragul          #+#    #+#             */
/*   Updated: 2022/11/21 16:46:29 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if ((size_t)start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - (size_t)start))
		sub = malloc(sizeof(char) * (ft_strlen(s) - (size_t)start) + 1);
	else
		sub = malloc(sizeof(char) * len + 1);
	if (!sub)
		return (0);
	while (s[i] && i < len)
	{
		sub[i] = *(s + start + i);
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
