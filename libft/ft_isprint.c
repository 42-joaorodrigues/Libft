/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:47:52 by joao-alm          #+#    #+#             */
/*   Updated: 2024/10/18 15:47:52 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the character is printable (ASCII 32-126).
 *
 * @param c Character to check.
 * @return 1 if printable, 0 otherwise.
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
