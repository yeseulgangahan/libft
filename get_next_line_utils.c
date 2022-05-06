/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehan <yehan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 20:29:47 by yehan             #+#    #+#             */
/*   Updated: 2022/05/04 10:36:38 by yehan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*append_buf(char const *s_save, char const *buf)
{
	char	*new;

	if (buf == NULL)
		return (NULL);
	else if (s_save == NULL && buf)
	{
		new = malloc(ft_strlen(buf) + 1);
		if (new == NULL)
			return (NULL);
		ft_strlcpy(new, buf, ft_strlen(buf) + 1);
		return (new);
	}
	new = malloc(ft_strlen(s_save) + ft_strlen(buf) + 1);
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s_save, ft_strlen(s_save) + 1);
	ft_strlcpy(new + ft_strlen(s_save), buf, ft_strlen(buf) + 1);
	return (new);
}