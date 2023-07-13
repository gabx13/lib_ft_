/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgabovs <vgabovs@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 23:36:53 by vgabovs           #+#    #+#             */
/*   Updated: 2023/07/11 18:18:30 by vgabovs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (i == 0 && (char)c != '\0')
		return (NULL);
	if (c == '\0')
		return ((char *)&s[i]);
	while (i > 0)
	{
		if ((char)c == s[i])
			return ((char *)&s[i]);
		i--;
	}
	if (i == 0 && (char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}

// int main()
// {
// 	char *src  = "free\0asd";
// 	char *src2 = "free\0asd";

// 	char *out = ft_strrchr(src2, 'r');
// 	char *out2 = strrchr(src, 'r');

// 	printf("my: %s\nno: %s\n", out, out2);
// }
