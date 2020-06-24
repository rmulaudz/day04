/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 09:16:07 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/23 09:16:58 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// function to find factorial of given number
int factorial(int n)
{
    int i = n, factorial = 1;
    if(i > 0)
    {
    while (i > 0)
    {
        factorial *= i;
        i--;
    }
    return factorial;
    }
    else if(i < 1)
        return 1;
    else
        return 0;
}
