/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:34:20 by adavis            #+#    #+#             */
/*   Updated: 2018/11/27 20:03:12 by adavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*kek;

	kek = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			kek = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		kek = (char *)&s[i];
	return (kek);
}
