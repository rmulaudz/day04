/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 09:19:43 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/23 09:20:13 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
    int i = 1, result = 1;
    if(power == 0)
        return 1;
    else if(power > 0)
    {
        while(i <= power)
        {
            result *= nb;
            i++;
        }
        return result;
    }
    else
        return 0;

}
