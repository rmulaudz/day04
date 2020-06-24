/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:33:10 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/24 14:32:58 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_is_prime(int nb)
{
    if(nb <= 1)
    {
        return 0;
    }
    else
    {
        int i = 2;
        while(i < nb)
        {
            if(nb%i == 0)
                return 0;
            i++;
        }
        return 1;
    }
}

