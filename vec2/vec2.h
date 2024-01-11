/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/11 09:55:03 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_H
# define VEC2_H

# include "../type.h"

//vec2_init.c
void	kdm_vec2(t_vec2 dst, float *src);
void	kdm_vec2_set(t_vec2 dst, float s);
void	kdm_vec2_cpy(t_vec2 dst, t_vec2 src);
void	kdm_vec2_zero(t_vec2 v);
void	kdm_vec2_one(t_vec2 v);

//vec2_basic.c
float	kdm_vec2_dot(t_vec2 a, t_vec2 b);
float	kdm_vec2_cross(t_vec2 a, t_vec2 b);
float	kdm_vec2_norm(t_vec2 v);

//vec2_opperation1.c
void	kdm_vec2_add(t_vec2 dst, t_vec2 a, t_vec2 b);
void	kdm_vec2_adds(t_vec2 dst, t_vec2 v, float s);
void	kdm_vec2_sub(t_vec2 dst, t_vec2 a, t_vec2 b);
void	kdm_vec2_subs(t_vec2 dst, t_vec2 v, float s);

//vec2_opperation2.c
void	kdm_vec2_mul(t_vec2 dst, t_vec2 a, t_vec2 b);
void	kdm_vec2_scale(t_vec2 dst, t_vec2 v, float s);
void	kdm_vec2_scale_as(t_vec2 dst, t_vec2 v, float s);
void	kdm_vec2_div(t_vec2 dst, t_vec2 a, t_vec2 b);
void	kdm_vec2_divs(t_vec2 dst, t_vec2 v, float s);

//vec2_variadic.c
void	kdm_vec2_addv(t_vec2 dst, uint32_t len, ...);
void	kdm_vec2_mulv(t_vec2 dst, uint32_t len, ...);

//vec2_utils.c
void	kdm_vec2_negate(t_vec2 v);
void	kdm_vec2_negate_to(t_vec2 dst, t_vec2 v);
void	kdm_vec2_normalize(t_vec2 v);
void	kdm_vec2_normalize_to(t_vec2 dst, t_vec2 v);

//vec2_advence.c
void	kdm_vec2_rotate(t_vec2 dst, t_vec2 v, float angle);
void	kdm_vec2_center(t_vec2 dst, t_vec2 a, t_vec2 b);
float	kdm_vec2_distance(t_vec2 a, t_vec2 b);
void	kdm_vec2_lerp(t_vec2 dst, t_vec2 to, float s, t_vec2 from);

#endif
