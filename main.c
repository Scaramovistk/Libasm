/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:14:22 by gscarama          #+#    #+#             */
/*   Updated: 2024/10/07 11:41:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/libasm.h"

int main (void)
{
	// Test 1: ft_strlen
	char testStr1[] = "Hello, World!";
	int len = ft_strlen(testStr1);
	printf("Test 1 - ft_strlen:\nExpected length: %lu, Returned length: %d\n\n", strlen(testStr1), len);

	// Test 2: ft_strcpy
	char dest[50];
	ft_strcpy(dest, testStr1);
	printf("Test 2 - ft_strcpy:\nExpected string: %s, Copied string: %s\n\n", testStr1, dest);

	// Test 3: ft_strcmp
	char testStr2[] = "Hello, World!";
	char testStr3[] = "Hello, world!";
	int cmp1 = ft_strcmp(testStr1, testStr2);
	int cmp2 = ft_strcmp(testStr1, testStr3);
	printf("Test 3 - ft_strcmp:\nComparison of identical strings: %d\nComparison of different strings: %d\n\n", cmp1, cmp2);

	// Test 4: ft_write
	int bytesWritten = ft_write(1, "Test 4 - ft_write: Writing to stdout\n", 38);
	printf("Bytes written: %d\n\n", bytesWritten);

	// Test 5: ft_read
	char buf[100];
	printf("Test 5 - ft_read: Please type some input (max 5 chars): ");
	ft_read(0, buf, 5);
	ft_write(1, "You typed: ", 11);
	ft_write(1, buf, 5);
	printf("\n\n");

	// Test 6: ft_strdup
	char *dupStr = ft_strdup(testStr1);
	printf("Test 6 - ft_strdup:\nExpected: %s, Duplicated: %s\n\n", testStr1, dupStr);
	free(dupStr);

	// Test 7: Edge case - Empty string in ft_strlen and ft_strdup
	char emptyStr[] = "";
	len = ft_strlen(emptyStr);
	printf("Test 7 - Empty string (ft_strlen): Length = %d\n", len);

	dupStr = ft_strdup(emptyStr);
	printf("Empty string (ft_strdup): Duplicated = '%s'\n\n", dupStr);
	free(dupStr);

	return 0;
}
