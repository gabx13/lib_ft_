/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgabovs <vgabovs@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:40:12 by vgabovs           #+#    #+#             */
/*   Updated: 2023/07/11 18:44:51 by vgabovs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	strl;

	if (needle[0] == '\0')
		return ((char *)haystack);
	// if (haystack == NULL || len == 0)
	// 	return (NULL);
	if (haystack[0])
		;
	i = 0;
	strl = ft_strlen(needle);
	while ((i + strl) <= len && haystack[i])
	{
		if (ft_strncmp((char *)&haystack[i], needle, strl) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
