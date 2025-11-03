/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:06:37 by decabral          #+#    #+#             */
/*   Updated: 2025/10/31 12:07:37 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signal;
	int	result;

	i = 0;
	signal = 1;
	result = 0;
	while (nptr[i] >= 9 && nptr[i] <= 13 || nptr[i] == ' ')
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			signal *= -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		result = result * 10 + (nptr[i] - 48);
		i++;
	}
	return (result * signal);
}
