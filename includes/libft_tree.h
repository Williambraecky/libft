/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tree.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbraeckm <wbraeckm@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 17:08:06 by wbraeckm          #+#    #+#             */
/*   Updated: 2019/06/27 17:31:32 by wbraeckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TREE_H
# define LIBFT_TREE_H

# include "libft.h"

typedef enum e_bcolor		t_bcolor;
typedef struct s_tree		t_tree;

enum		e_bcolor
{
	RED,
	BLACK
};

struct		s_tree
{
	t_tree		*parent;
	t_tree		*left;
	t_tree		*right;
	t_bcolor	color;
	void		*data;
};

void	ft_treeiter_infix(t_tree *tree, void (*func)(void *));
void	ft_treeiter_prefix(t_tree *tree, void (*func)(void *));
void	ft_treeiter_suffix(t_tree *tree, void (*func)(void *));
t_tree	*ft_treenew(void *data);
t_tree	*ft_treenewcpy(void *data, size_t size);

#endif
