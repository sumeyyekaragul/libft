/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:26:30 by skaragul          #+#    #+#             */
/*   Updated: 2022/11/21 14:36:40 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*st;

	i = 0;
	st = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			st = (char *)(s + i);
		i++;
	}
	if (s[i] == (char)c)
		st = (char *)(s + i);
	return (st);
}
