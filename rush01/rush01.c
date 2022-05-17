#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "rush01.h"

void    numbers(char *str,char *value)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			value[j] = str[i];
			j++;
		}	
		i++;
	}

}

void	print_error()
{
	write(1, "ERROR\n", 6);
}

void	setting_value(char *str)
{
	//char skyscraper[4][4];
	char *la = malloc(4 * 1);
	char *lb = malloc(4 * 1);
	char *lc = malloc(4 * 1);
	char *ld = malloc(4 * 1);

	la[0] ='0';
	la[1] ='0';
	la[2] ='0';
	la[3] ='0';
	
	lb[0] ='0';
	lb[1] ='0';
	lb[2] ='0';
	lb[3] ='0';

	lc[0] ='0';
	lc[1] ='0';
	lc[2] ='0';
	lc[3] ='0';

	ld[0] ='0';
	ld[1] ='0';
	ld[2] ='0';
	ld[3] ='0';

	// int x;
	// int y;
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] == '1')
		{
			if(i < 4)
			{
				la[i] = '4';
				if(str[i + 4] == '2')//fim da coluna
					ld[i] = '3';
				if(str[i + 9] == '2')//fim da linha
					la[i] = '3';
			}
			if(i < 8)
				ld[i - 4] = '4';

			if(i < 12)
				la[i - 8] = '4';

			else if(i >= 12)
			{
				ld[i - 12] = '4';
				if(str[i - 12] == '2')
					la[i] = '3';
			}

		}
		/* OU */
		// if(str[i] == '1')
		// {
		// 	if(i < 4)
		// 		skyscraper[i][y] = '4';
		// 	if(i < 8)
		// 		skyscraper[i - 4][y + 1] = '4';
		// 	if(i < 12)
		// 		skyscraper[i - 8][y + 2] = '4';
		// 	if(i >= 12)
		// 		skyscraper[i - 12][y + 3] = '4';
		// }

		if(str[i] == '4')
		{
			if(i < 4)
				la[i] = '1';
			if(i < 8)
				lb[i - 4] = '1';
			if(i < 12)
				lc[i - 8] = '1';
			if(i >= 12)
				ld[i - 12] = '1';
		}
		i++;
	}
	print_matriz(la);
	print_matriz(lb);
	print_matriz(lc);
	print_matriz(ld);
	free(la);
	free(lb);
	free(lc);
	free(ld);
}

void	print_matriz(char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}