/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:53:31 by crocha-s          #+#    #+#             */
/*   Updated: 2023/04/23 14:59:10 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{
   printf ("Numero de caracteres: %lu\n", ft_strlen("abcdefg"));
   printf ("E alfabetico?: %i\n", ft_isalpha('3'));
   printf ("E um digito?: %i\n", ft_isdigit('3'));
   printf ("E alfanumerico?: %i\n", ft_isalnum(')'));
   printf ("Esta na tabela ascii?: %i\n", ft_isascii(')'));
   printf ("E imprimivel?: %i\n", ft_isprint(')'));
   printf ("A maiuscula : %i\n", ft_toupper('b'));
   printf ("A minuscula : %i\n", ft_tolower('B'));
   printf ("A diferenca entre s1 e s2 e: %i\n", ft_strncmp("Portoc", "PortoC",6));
   char dest[8];
   const char source []= "sourtgdfce";
   printf ("Resultado de strlcpy e: %lu\n", ft_strlcpy(dest, source, 6));
   
   char destiny[5] = "aaaa";
   const char thesource []= "sourtgdfce";
   size_t i = ft_strlcat(destiny,thesource,6) ;
   
   printf ("Resultado de strlcat e: %lu\n", i );
   printf("Resultado do atoi e: %i\n", ft_atoi("++54"));

   char c[8];

   printf("Resultado de memset e: %p\n", ft_memset(c,'$',8));
   printf("Valor no ponteiro de memset e: %s\n",c);

   char dest_m[8];
   char *src = "testando";

   printf("Resultado de memcpy e: %p\n", ft_memcpy(dest_m, src, 5));
   printf("Valor no ponteiro de memcpy: %s\n", src);
   char dest_n[8];
   
   printf ("Resultado de memchr e: %p\n", ft_memchr(dest_n, 'n', 10));

   char *str1 = "testando";
   char *str2 = "testandO";
   
   printf ("Resultado de memcmp e: %i\n", ft_memcmp(str1, str2, 10));
   
   printf ("Resultado de strchr e: %s\n", ft_strchr(str1, 'a'));
   
   printf ("Resultado de strrchr e: %s\n", ft_strrchr(str2, 'n'));

   char *str3 = "aseqwwasdaweavbnasdaweasase";
   char *str4 = "vbn";
   
   printf ("Resultado de strnstr: %s\n", ft_strnstr(str3,str4,2));
   printf ("Resultado de Calloc e: %p\n", ft_calloc(5, 5));

   printf("Resultado de strjoin e: %s\n", ft_strjoin("","def"));
   

   
   
}



