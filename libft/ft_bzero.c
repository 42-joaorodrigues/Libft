/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 22:58:03 by joao-alm          #+#    #+#             */
/*   Updated: 2024/10/18 22:58:05 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Sets the first n bytes of the memory area pointed to by s to zero.
 *
 * @param s Pointer to the memory area.
 * @param n Number of bytes to set to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
