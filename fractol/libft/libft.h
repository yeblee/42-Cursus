/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:54:38 by yeblee            #+#    #+#             */
/*   Updated: 2022/07/24 22:28:44 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int	    ft_strcmp(const char *s1, const char *s2);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

#endif