/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_labs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:23:35 by knieves-          #+#    #+#             */
/*   Updated: 2025/02/28 16:24:28 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long    ft_labs(long x)
{
    if (x < 0)
        return(-x);
    return (x);
}