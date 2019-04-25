/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavis <adavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:34:20 by adavis            #+#    #+#             */
/*   Updated: 2019/04/25 16:25:08 by adavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_iter;

	s_iter = (char *)s;
	while (*s_iter != '\0')
	{
		if (*s_iter == (char)c)
			return ((char *)&*s_iter);
		s_iter++;
	}
	if (*s_iter == (char)c)
		return (s_iter);
	return (NULL);
}
