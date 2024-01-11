/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_opperation1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/10 13:48:43 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2.h"

void	kdm_vec2_add(t_vec2 dst, t_vec2 a, t_vec2 b)
{
	dst[X] = a[X] + b[X];
	dst[Y] = a[Y] + b[Y];
}

void	kdm_vec2_adds(t_vec2 dst, t_vec2 v, float s)
{
	dst[X] = v[X] + s;
	dst[Y] = v[Y] + s;
}

void	kdm_vec2_sub(t_vec2 dst, t_vec2 a, t_vec2 b)
{
	dst[X] = a[X] - b[X];
	dst[Y] = a[Y] - b[Y];
}

void	kdm_vec2_subs(t_vec2 dst, t_vec2 v, float s)
{
	dst[X] = v[X] - s;
	dst[Y] = v[Y] - s;
}
