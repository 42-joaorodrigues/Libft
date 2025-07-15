/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:36:09 by joao-alm          #+#    #+#             */
/*   Updated: 2024/10/17 20:33:35 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the character is a digit (0-9).
 *
 * @param c Character to check.
 * @return 1 if digit, 0 otherwise.
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
