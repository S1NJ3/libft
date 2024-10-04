/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrighi <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:36:59 by jrighi            #+#    #+#             */
/*   Updated: 2024/10/04 03:30:35 by jrighi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

void		*ft_bzero(void	*s, int n);
int			ft_strlen(const char *str);
void		*ft_memcpy(void *dest, const void *src, int n);
char		*ft_strdup(char *str);
int			ft_atoi(const char *str);
void		*ft_calloc(size_t nmemb, size_t size);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
void		*ft_memchr(void *s, int c, int n);
int			ft_memcmp(void	*s1, void *s2, size_t n);
void		*ft_memmove(void *dest, void *src, int n);
void		*ft_memset(void *s, int c, int n);
char		*ft_strchr(const char *str, int c);
int			ft_strlcat(char *dest, const char *src, size_t size);
int			ft_strlcpy(char *dest, const char *src, size_t size);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *str, const char *to_find, size_t n);
char		*ft_strrchr(const char *str, int c);
char		*ft_substr(const char *s, unsigned int start, size_t len);
int			ft_tolower(int c);
int			ft_toupper(int c);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);

#endif
