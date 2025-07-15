/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 22:16:32 by joao-alm          #+#    #+#             */
/*   Updated: 2024/10/17 22:16:40 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the character is an ASCII character (0-127).
 *
 * @param c Character to check.
 * @return 1 if ASCII, 0 otherwise.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
