/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmulaudz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 09:23:47 by rmulaudz          #+#    #+#             */
/*   Updated: 2020/06/23 09:24:05 by rmulaudz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_fibonacci(int index)
{
   if(index >= 0 && index <= 1)
      return index;
   else if(index < 0)
      return -1;
   else
      return ft_fibonacci(index-1) + ft_fibonacci(index-2);
}

