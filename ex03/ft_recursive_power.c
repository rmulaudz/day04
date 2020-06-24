/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 09:21:04 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/23 09:21:40 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
    if (power == 0)
        return 1;
    else if(power < 0)
        return 0;
    else if (power%2 == 0)
        return ft_recursive_power(nb, power/2) * ft_recursive_power(nb, power/2);
    else
        return nb*ft_recursive_power(nb, power/2) * ft_recursive_power(nb, power/2);
}
