/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/19 18:35:35 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_H
# define VEC3_H

# include "../type.h"

//vec3_init.c
void	kdm_vec3(t_vec3 dst, float *src);
void	kdm_vec3_set(t_vec3 dst, float s);
void	kdm_vec3_cpy(t_vec3 dst, t_vec3 src);
void	kdm_vec3_zero(t_vec3 v);
void	kdm_vec3_one(t_vec3 v);

//vec3_basic.c
float	kdm_vec3_dot(t_vec3 a, t_vec3 b);
void	kdm_vec3_cross(t_vec3 dst, t_vec3 a, t_vec3 b);
void	kdm_vec3_crossn(t_vec3 dst, t_vec3 a, t_vec3 b);
float	kdm_vec3_norm(t_vec3 v);

//vec3_opperation1.c
void	kdm_vec3_add(t_vec3 dst, t_vec3 a, t_vec3 b);
void	kdm_vec3_adds(t_vec3 dst, t_vec3 v, float s);
void	kdm_vec3_sub(t_vec3 dst, t_vec3 a, t_vec3 b);
void	kdm_vec3_subs(t_vec3 dst, t_vec3 v, float s);

//vec3_opperation2.c
void	kdm_vec3_mul(t_vec3 dst, t_vec3 a, t_vec3 b);
void	kdm_vec3_scale(t_vec3 dst, t_vec3 v, float s);
void	kdm_vec3_scale_as(t_vec3 dst, t_vec3 v, float s);
void	kdm_vec3_div(t_vec3 dst, t_vec3 a, t_vec3 b);
void	kdm_vec3_divs(t_vec3 dst, t_vec3 v, float s);

//vec3_variadic.c
void	kdm_vec3_addv(t_vec3 dst, uint32_t len, ...);
void	kdm_vec3_mulv(t_vec3 dst, uint32_t len, ...);

//vec3_utils.c
void	kdm_vec3_negate(t_vec3 v);
void	kdm_vec3_negate_to(t_vec3 dst, t_vec3 v);
void	kdm_vec3_normalize(t_vec3 v);
void	kdm_vec3_normalize_to(t_vec3 dst, t_vec3 v);

//vec3_advence.c
void	kdm_vec3_rotate(t_vec3 dst, t_vec3 v, float angle, t_vec3 axis);
void	kdm_vec3_center(t_vec3 dst, t_vec3 a, t_vec3 b);
float	kdm_vec3_distance(t_vec3 a, t_vec3 b);
void	kdm_vec3_lerp(t_vec3 dst, t_vec3 to, float s, t_vec3 from);

//vec3_graphic.c
void	kdm_vec3_reflect(t_vec3 dst, t_vec3 vec, t_vec3 normal);

#endif
