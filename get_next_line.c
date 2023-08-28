/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arranz <arranz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:21:27 by aarranz-          #+#    #+#             */
/*   Updated: 2023/08/28 21:33:15 by arranz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_detect(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen_line(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\n' || str[i] != '\0')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

char	*get_next_line(int fd)
{
	static char		*temp;
	char			*buff;
	char			*line;
	size_t			r;
	int				i;
	
	i = 0;
	temp = malloc(sizeof(char) * 1);
	line = malloc(sizeof(char) * 1);
	buff = malloc(sizeof(char) * (BUFFER_SIZE));
	while (ft_detect(temp) == 0)
	{
	r = read (fd, buff, BUFFER_SIZE);
	temp = ft_strjoin(temp, buff);
	}
	line= ft_substr(temp, 0, ft_strlen_line(temp));
	return (line);
}

int	main(void)
{
	int	fd;

	fd = open("texto.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("------\n");
	printf("%s", get_next_line(fd));
	printf("------\n");

	close(fd);
}
