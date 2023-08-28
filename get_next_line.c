/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:21:27 by aarranz-          #+#    #+#             */
/*   Updated: 2023/08/28 14:07:32 by aarranz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char		*temp;
	char			*buff;
	//char			*line;
	size_t			r;

	temp = "";
	buff = malloc(sizeof(char) * (BUFFER_SIZE));
	while ()
	{
		
	}
	r = read (fd, buff, BUFFER_SIZE);
	temp = ft_strjoin(temp, buff);
	return (temp);
}

int	main(void)
{
	int	fd;

	fd = open("texto.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("------\n");
	printf("%s", get_next_line(fd));
	printf("------\n");
	printf("%s", get_next_line(fd));
	printf("------\n");
	printf("%s", get_next_line(fd));
	printf("------\n");
	printf("%s", get_next_line(fd));
	printf("------\n");
	printf("%s", get_next_line(fd));
	printf("------\n");
	printf("%s", get_next_line(fd));
	printf("------\n");
	printf("%s", get_next_line(fd));
	printf("------\n");
	printf("%s", get_next_line(fd));
	printf("------\n");
	close(fd);
}
