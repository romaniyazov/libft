/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavis <adavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:26:06 by adavis            #+#    #+#             */
/*   Updated: 2018/12/13 18:20:57 by adavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				i;
	long long		nbr;
	int				is_neg;

	i = 0;
	nbr = 0;
	is_neg = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		is_neg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		if (nbr < 0)
			return (is_neg ? 0 : -1);
		i++;
	}
	return (is_neg ? -nbr : nbr);
}
