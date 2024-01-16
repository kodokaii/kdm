/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/16 12:10:21 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../type.h"

int	kdm_quadratic_equation(float x[2], float a, float b, float c)
{
	float	d;

	d = (b * b) - 4 * a * c;
	if (d < 0)
		return (EXIT_FAILURE);
	d = sqrtf(d);
	x[0] = (-b - d) / (2 * a);
	x[1] = (-b + d) / (2 * a);
	return (EXIT_SUCCESS);
}
