/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:29:31 by joao-alm          #+#    #+#             */
/*   Updated: 2024/10/25 21:30:56 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of digits from a given Int.
 *
 * @param n Number to count digits of.
 * @return Returns the number of digits of an Int number.
 * If the number is negative, returns one extra value in count,
 * to account for the negative sign.
 */
static unsigned int	ft_digit_count(int n)
{
	unsigned int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

/**
 * Converts an integer to a null-terminated string.
 *
 * @param n Integer to convert.
 * @return Pointer to the string, or NULL on allocation failure.
 */
char	*ft_itoa(int n)
{
	long			nbr;
	char			*itoa;
	unsigned int	n_digits;

	nbr = n;
	n_digits = ft_digit_count(n);
	itoa = (char *)malloc((n_digits + 1) * sizeof(char));
	if (!itoa)
		return (NULL);
	itoa[n_digits--] = '\0';
	if (n < 0)
	{
		nbr = -nbr;
		itoa[0] = '-';
	}
	if (nbr == 0)
		itoa[0] = '0';
	while (nbr)
	{
		itoa[n_digits--] = '0' + (nbr % 10);
		nbr /= 10;
	}
	return (itoa);
}
