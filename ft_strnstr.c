/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaragul <skaragul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:41:42 by skaragul          #+#    #+#             */
/*   Updated: 2022/11/20 16:12:39 by skaragul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hay;
	size_t	ned;

	hay = 0;
	if (!needle[0])
		return ((char *)haystack);
	if (!haystack)
		return (NULL);
	while (haystack[hay] != '\0')
	{
		ned = 0;
		while (haystack[hay + ned] == needle[ned] && (hay + ned) < len)
		{
			if (haystack[hay + ned] == '\0' && needle[ned] == '\0')
				return ((char *)&haystack[hay]);
			ned++;
		}
		if (needle[ned] == '\0')
			return ((char *)haystack + hay);
		hay++;
	}
	return (NULL);
}
