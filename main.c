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
extern char * ft_strcpy(char *, char *);
#include <stdio.h>

// extern ssize_t read(int fildes, void *buf, size_t nbyte);

// write(int fildes, const void *buf, size_t nbyte);

int main (void)
{
	char* str = "Hello";

	ft_strcpy("World", str);
	printf("Value: %d\n Str: %s\n ", ft_strlen("Test"), str);

	return (0);
}