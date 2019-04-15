/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavis <adavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:22:31 by adavis            #+#    #+#             */
/*   Updated: 2019/04/15 20:03:37 by adavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
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
			return (NULL);
		ft_strncpy(words[i], (char *)&s[j], ft_strwrdlen((char *)&s[j], c));
		j += ft_strwrdlen((char *)&s[j], c);
		i++;
	}
	return (words);
}
