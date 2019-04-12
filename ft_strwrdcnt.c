/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwrdcnt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavis <adavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:32:32 by adavis            #+#    #+#             */
/*   Updated: 2019/04/12 20:38:59 by adavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Counts number of substrings between sep(arators) in str
*/

int		ft_strwrdcnt(char *str, char sep)
{
	int		cnt;

	cnt = 0;
	while (*str != '\0')
	{
		if (*str != sep)
		{
			cnt++;
			while (*str != sep || *str != '\0')
				str++;
		}
		str++;
	}
	return (cnt);
}
