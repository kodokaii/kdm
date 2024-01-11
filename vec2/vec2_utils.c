/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/10 17:54:58 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec2.h"

void	kdm_vec2_negate(t_vec2 v)
{
	v[X] = -v[X];
	v[Y] = -v[Y];
}

void	kdm_vec2_negate_to(t_vec2 dst, t_vec2 v)
{
	dst[X] = -v[X];
	dst[Y] = -v[Y];
}

void	kdm_vec2_normalize(t_vec2 v)
{
	float	norm;

	norm = kdm_vec2_norm(v);
	if (norm)
		kdm_vec2_divs(v, v, norm);
}

void	kdm_vec2_normalize_to(t_vec2 dst, t_vec2 v)
{
	float	norm;

	norm = kdm_vec2_norm(v);
	if (norm)
		kdm_vec2_divs(dst, v, norm);
	else
		kdm_vec2_zero(dst);
}
