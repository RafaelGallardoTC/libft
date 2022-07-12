/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallard <rgallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 17:45:24 by rgallard          #+#    #+#             */
/*   Updated: 2022/07/12 16:57:56 by rgallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The strlcpy() function copy and concatenate strings with the same input
** parameters and output result as snprintf(3). It is designed to be safer,
** more consistent, and less error prone replacements for the easily misused
** functions strncpy(3) and strncat(3).
**	strlcpy() takes the full size of the destination buffer and guarantee
** NUL-termination if there is room.
** Note that room for the NUL should be included in dstsize.
** If the src and dst strings overlap, the behavior is undefined.
*/
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	const char	*s;
	size_t		n;
	size_t		len_src;

	s = src;
	n = dstsize;
	len_src = ft_strlen(src);
	if (!(dst && src))
		return (0);
	if (len_src + 1 < dstsize)
	{
		ft_memcpy(dst, src, len_src + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (len_src);
}
