/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:18:46 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/23 10:19:20 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_sqrt(int nb)
{
    if (nb == 0 || nb == 1)
    return nb;

    int i = 1, result = 1;
    while (result <= nb)
    {
      i++;
      result = i * i;
    }

    if(nb%(i - 1) == 0)
    {
        return i - 1;
    }
    else
        return 0;
}
