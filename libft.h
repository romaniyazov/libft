/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adavis <adavis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 18:15:19 by adavis            #+#    #+#             */
/*   Updated: 2019/04/08 18:13:58 by adavis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <libc.h>

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
int		ft_atoi(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isalpha(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isdigit(int c);
char	*ft_strnew(size_t size);
void	ft_putchar(char c);
char	*ft_strdup(const char *s1);
void	ft_putchar_fd(char c, int fd);
int		ft_isspace(char c);
void	*ft_memcpy(void *dst, void *src, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
void	ft_putstr(char const *s);
void	ft_strrev(char *str);

#endif
