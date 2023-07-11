/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgabovs <vgabovs@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:37:33 by vgabovs           #+#    #+#             */
/*   Updated: 2023/07/11 15:54:38 by vgabovs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	count;
	int	i;

	i = -1;
	count = 0;
	if (s[0] == '\0')
		return (0);
	if (s[0] != c)
		count = 1;
	while (s[++i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
	}
	return (count);
}

char	**word_split(char **res, char const *s, char c)
{
	int		i;
	int		j;
	int		start;

	i = 0;
	j = -1;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start != i)
		{
			res[++j] = ft_substr(s, start, i - start);
			if (res[j] == NULL && j > 0)
			{
				while (j-- > 0)
					free(res[j]);
				return (NULL);
			}
		}
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)ft_calloc(sizeof(char *), (word_count(s, c) + 1));
	if (res == NULL)
		return (NULL);
	return (word_split(res, s, c));
}

// #include <stdio.h>
// int main()
// {
// 	char *a = "caababab";
// 	char c = 'a';

// 	char **s = ft_split(a, c);
// 	char **l = s;
// 	while (*s)
// 	{
// 		printf("%s\n", *s);
// 		s++;
// 	}

// 	// Free the dynamically allocated memory
// 	s = l; // Reset the pointer to the beginning of the array
// 	while (*s)
// 	{
// 		free(*s);
// 		s++;
// 	}
// 	free(l);

// 	return 0;
// }
