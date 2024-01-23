/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/01/23 12:58:21 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_H
# define TYPE_H

# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include <float.h>

# define X	0
# define Y	1
# define Z	2
# define W	3

# define PI		3.141592653
# define TAU	6.283185307

typedef float	t_vec2[2];
typedef float	t_vec3[3];
typedef float	t_vec4[4];

typedef t_vec2	t_mat2[2];
typedef t_vec3	t_mat3[3];
typedef t_vec4	t_mat4[4];

#endif
