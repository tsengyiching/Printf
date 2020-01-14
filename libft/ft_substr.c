/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/22 15:41:11 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/06 16:54:19 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	i;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_calloc(sizeof(char), 1));
	if (ft_strlen(s) < len)
		len = ft_strlen(s) - start;
	if (!(dst = ft_calloc(sizeof(char), (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	return (dst);
}
