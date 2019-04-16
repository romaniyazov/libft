/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavis <adavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:22:31 by adavis            #+#    #+#             */
/*   Updated: 2019/04/16 18:37:49 by adavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	arr_free(char **arr, int i)
{
	while (i--)
		free(arr[i]);
	free(arr);
	arr = NULL;
}

char		**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		wrdcnt;
	int		i;
	int		j;

	if (!s || !(words = (char **)malloc(sizeof(*words) *
								((wrdcnt = ft_strwrdcnt((char *)s, c)) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	words[wrdcnt] = NULL;
	while (wrdcnt--)
	{
		while (s[j] == c)
			j++;
		if (!(words[i] = ft_strnew(ft_strwrdlen((char *)&s[j], c))))
		{
			arr_free(words, i - 1);
			return (NULL);
		}
		ft_strncpy(words[i], (char *)&s[j], ft_strwrdlen((char *)&s[j], c));
		j += ft_strwrdlen((char *)&s[j], c);
		i++;
	}
	return (words);
}
