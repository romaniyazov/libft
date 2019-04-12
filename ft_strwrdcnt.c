/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwrdcnt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavis <adavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:32:32 by adavis            #+#    #+#             */
/*   Updated: 2019/04/12 20:36:34 by adavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Counting number of substrings between separators
*/

int		ft_strwrdcnt(char *str, char c)
{
	int		cnt;

	cnt = 0;
	while (*str != '\0')
	{
		if (*str != c)
		{
			cnt++;
			while (*str != c || *str != '\0')
				str++;
		}
		str++;
	}
	return (cnt);
}
