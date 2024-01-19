/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/19 15:12:28 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

float	kdm_clamp(float a, float min, float max)
{
	if (a < min)
		return (min);
	if (max < a)
		return (max);
	return (a);
}
