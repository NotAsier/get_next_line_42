/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arranz <arranz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:26:45 by aarranz-          #+#    #+#             */
/*   Updated: 2023/09/16 13:11:05 by arranz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 6
# endif

//get_next_line.c
char	*ft_read(char *s, int fd);
char	*change_the_static(char *s);
char	*get_line(char *res);
char	*get_next_line(int fd);

//get_next_line_utils.c
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
#endif // GET_NEXT_LINE_H
