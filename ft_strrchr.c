/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavis <adavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:34:20 by adavis            #+#    #+#             */
/*   Updated: 2019/04/16 18:42:16 by adavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			str = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		str = (char *)&s[i];
	return (str);
}
