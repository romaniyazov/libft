/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavis <adavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:26:06 by adavis            #+#    #+#             */
/*   Updated: 2019/04/15 21:24:28 by adavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip_atoi(char a, char b, int *i)
{
	if ((a == '+' && b >= '0' && b <= '9'))
	{
		*i += 1;
		return (1);
	}
	else if ((a >= '0' && a <= '9') || a == '-')
	{
		return (1);
	}
	return (0);
}

int			ft_atoi(const char *str)
{
	int				i;
	long long		nbr;
	int				is_neg;

	i = 0;
	nbr = 0;
	is_neg = 0;
	while (ft_isspace(str[i]))
		i++;
	if (!(skip_atoi(str[i], str[i + 1], &i)))
		return (0);
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
