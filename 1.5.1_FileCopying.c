/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.5.1_FileCopying.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaaaron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 13:18:15 by jaaaron           #+#    #+#             */
/*   Updated: 2018/09/14 14:17:32 by jaaaron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

main()
{
	int c;

	c = getchar();			/* read a character						*/
	while (c != EOF)		/* while (character is not end-of-file) */
	{
		putchar(c);			/* output the character just read		*/
		c = getchar();		/* read a character						*/
	}
}

/* 2nd version below */
/*
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);
}
*/
