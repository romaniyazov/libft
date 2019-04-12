/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavis <adavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:40:00 by adavis            #+#    #+#             */
/*   Updated: 2019/04/12 23:21:18 by adavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wrdlen(char *s, char c)
{
	int		i;

	i = 0;
	while (*s != c)
	{
		i++;
		s++;
	}
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**wrd;
	int		i;
	int		cnt;

	if (!s || !(wrd = (char**)malloc(sizeof(*wrd) *
		((cnt = ft_strwrdcnt((char *)s, c)) + 1))))
		return (NULL);
	i = 0;
	while (cnt)
	{
		while (s[i] == c)
			i++;
		ft_strncpy(wrd[ft_strwrdcnt((char *)s, c) - cnt], &s[i], ft_wrdlen((char *)&s[i], c) + 1);
		wrd[ft_strwrdcnt((char *)s, c) - cnt][ft_wrdlen((char *)&s[i], c) + 1] = '\0';
		i += ft_wrdlen((char *)&s[i], c) + 1;
		cnt--;
	}
	wrd[cnt + 1] = 0;
	return (wrd);
}
