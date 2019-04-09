/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavis <adavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 15:14:09 by adavis            #+#    #+#             */
/*   Updated: 2018/12/09 15:23:12 by adavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	unsigned char	*dst_chr;
	unsigned char	*src_chr;

	dst_chr = (unsigned char *)dst;
	src_chr = (unsigned char *)src;
	while (n--)
	{
		*dst_chr = *src_chr;
		dst_chr++;
		src_chr++;
	}
	return (dst);
}
