/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yehan <yehan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 07:53:10 by yehan             #+#    #+#             */
/*   Updated: 2022/06/03 08:14:04 by yehan            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>

# define BUFFER_SIZE 1000

char	*get_next_line(int fd);
char	*read_iter(char *s_save, int fd);
char	*get_line(char const *s_save);
bool	set_remains(char **s_save, size_t offset);
#endif
