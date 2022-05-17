/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedr2 <jpedrones@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 05:12:23 by wwallas-          #+#    #+#             */
/*   Updated: 2022/04/17 18:55:56 by joapedr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	print_error();
void    numbers(char *str,char *value);
void	setting_value(char *str);

int    main(int argc, char **argv)
{  
	char *a = malloc(16);
	
	if (argc != 2)
	{
		print_error();
		return(0);
	}
	
	numbers(argv[1], a);
	setting_value(a);
	
	printf("%s\n", a);
	
	free(a);
    return (0);
}
//"1 4 1 4| -> 4 1 4 1
// 2 1 2 1| ->
// 2 3 3 3| ->
// 3 3 3 3" -> 3 4 3 4

// "1 4 1 4| 2 1 2 1| 2 3 3 3| 3 3 3 3"