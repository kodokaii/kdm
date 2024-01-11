/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_opperation1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/11 08:49:25 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec3.h"

void	kdm_vec3_add(t_vec3 dst, t_vec3 a, t_vec3 b)
{
	dst[X] = a[X] + b[X];
	dst[Y] = a[Y] + b[Y];
	dst[Z] = a[Z] + b[Z];
}

void	kdm_vec3_adds(t_vec3 dst, t_vec3 v, float s)
{
	dst[X] = v[X] + s;
	dst[Y] = v[Y] + s;
	dst[Z] = v[Z] + s;
}

void	kdm_vec3_sub(t_vec3 dst, t_vec3 a, t_vec3 b)
{
	dst[X] = a[X] - b[X];
	dst[Y] = a[Y] - b[Y];
	dst[Z] = a[Z] - b[Z];
}

void	kdm_vec3_subs(t_vec3 dst, t_vec3 v, float s)
{
	dst[X] = v[X] - s;
	dst[Y] = v[Y] - s;
	dst[Z] = v[Z] - s;
}
