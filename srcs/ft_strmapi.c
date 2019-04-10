/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavis <adavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 17:39:46 by adavis            #+#    #+#             */
/*   Updated: 2019/04/04 18:11:28 by adavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sn;
	int		i;

	if (s == NULL)
		return (0);
	if (!(sn = malloc(ft_strlen(s) * sizeof(char) + 1)))
		return (NULL);
	i = 0;
	if (s != NULL)
		while (s[i])
		{
			sn[i] = (*f)(i, s[i]);
			i++;
		}
	sn[i] = 0;
	return (sn);
}
