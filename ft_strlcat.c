/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavis <adavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 12:39:23 by adavis            #+#    #+#             */
/*   Updated: 2018/12/13 20:25:43 by adavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned char	*dst_str;
	unsigned char	*src_str;
	size_t			i;
	size_t			j;

	if (size < 1)
		return (ft_strlen(dst));
	i = 0;
	while (dst_str[i])
		i++;
	j = 0;
	while (j < size - ft_strlen(src) - 1)
	{
		dst_str[i] = src_str[j];
		i++;
		j++;
	}
	dst_str[j] = '\0';
	return (ft_strlen(dst));
}
