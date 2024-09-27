/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c .                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:14:22 by gscarama          #+#    #+#             */
/*   Updated: 2024/09/16 11:41:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


extern int ft_strlen(char *);
extern char * ft_strcpy(char *dest, const char *src);
extern int ft_strcmp(const char *s1, const char *s2);
#include <stdio.h>
#include <string.h>

// extern ssize_t read(int fildes, void *buf, size_t nbyte);

// write(int fildes, const void *buf, size_t nbyte);

int main (void)
{
	char str[] = "Hello";
	char str2[50];

	ft_strcpy(str2, str);

	printf("Str: %s\n Value: %d\n Ori: %d", str2, ft_strcmp(str, str2), strcmp(str, str2));

	return (0);
}