/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:39:53 by wwallas-          #+#    #+#             */
/*   Updated: 2022/04/22 19:21:47 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb > 2)
	{
		i = 2;
		while (i < 46341)
		{
			if ((i * i) / 2 < nb)
				if (nb % i == 0)
					return (0);
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (++nb)
	{
		if (ft_is_prime(nb))
			return (nb);
	}
	return (0);
}
