/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeblee <yeblee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 00:58:18 by marvin            #+#    #+#             */
/*   Updated: 2022/04/13 19:40:06 by yeblee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prec_nbr(unsigned long long nbr, t_flag *info, char **temp, int i)
{
	int		nbr_len;
	int		res;

	nbr_len = ft_nbrlen(nbr, info);
	if (info->prec > nbr_len)
		res = info->prec;
	else
		res = nbr_len;
	*temp = (char *)malloc(sizeof(char) * res + 1);
	if (!(*temp))
		return (0);
	(*temp)[res] = '\0';
	while (nbr_len + i < res)
	{
		(*temp)[i] = '0';
		i++;
	}
	i = 1;
	if (nbr == 0 && info->prec != 0)
		(*temp)[res - i] = '0';
	while (nbr)
	{
		(*temp)[res - i] = nbr_baseset(info->type)[nbr % info->nbr_base];
		nbr /= info->nbr_base;
		i++;
	}
	return (nbr_len);
}

int	ft_printnbr(unsigned long long nbr, char type, char *base)
{
	int		i;
	int		nbr_len;
	char	*result;

	nbr_len = 0;
	nbr_len += prec_nbr(nbr, base, result, i);
	nbr_len += nbr_put_minus(type, result);
	return (nbr_len);
}
