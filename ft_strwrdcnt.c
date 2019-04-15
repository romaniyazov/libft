/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwrdcnt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavis <adavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:32:32 by adavis            #+#    #+#             */
/*   Updated: 2019/04/15 16:39:48 by adavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strwrdcnt(char *str, char sep)
{
	int		cnt;

	cnt = 0;
	while (*str)
	{
		if (*str != sep)
		{
			cnt++;
			while (*str != sep && *str)
				str++;
		}
		else
			str++;
	}
	return (cnt);
}
