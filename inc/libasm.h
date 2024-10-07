/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:14:22 by gscarama          #+#    #+#             */
/*   Updated: 2024/10/07 11:41:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBASM_H
# define LIBASM_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_strlen(char *);
char*	ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_write(int fd, const void *buf, size_t count);
size_t	ft_read(int fd, void *buf, size_t count);
char*	ft_strdup(const char *s);

# endif
