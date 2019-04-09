/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavis <adavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:46:58 by adavis            #+#    #+#             */
/*   Updated: 2019/04/08 19:20:03 by adavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	int		tmp;
	int		len;
	int		sign;
	char	*str;

	if (n == -2147483648)
		return ("-2147483648");
	len = 0;
	if((sign = n) < 0)
	{
		n = -n;
		len = 1;
	}
	tmp = n;
	while (tmp > 0)
	{
		len++;
		tmp /= 10;
	}
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	tmp = 0; ///
	while (n > 0)
	{
		str[tmp] = (n % 10) + '0';///
		n /= 10;
		//str++;
		tmp++; ///
	}
	if (sign < 0)
	{
		str[tmp] = '-'; ///
		//str++;
		tmp++; ///
	}
	str[tmp] = '\0'; ///
	ft_strrev(str);
	return(str);
}