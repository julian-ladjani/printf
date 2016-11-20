/*
** my_printf_mod.c for my_printf in /home/julian-ladjani/delivery/PSU/my_printf/PSU_2016_my_printf/src/fonction
**
** Made by julian ladjani
** Login   <julian.ladjani@epitech.net>
**
** Started on  Mon Nov 14 15:34:16 2016 julian ladjani
** Last update Jan Nov 20 02:29:32 2016 Julian Ladjani
*/

#include "my.h"

char	*edit_my_number(char *number, char *mod, t_mod moddata)
{
  moddata.lenght += my_strlenprintf(number);
  moddata = parse_my_mod(mod, moddata);
  if (moddata.firstchar != 'n' && moddata.firstchar != '-')
    moddata.lenght++;
  if (moddata.lenght < moddata.nbmin)
    number = my_realloc(number, moddata.nbmin);
  if (moddata.firstchar != 'n' && moddata.firstchar != '-')
    my_strcatprintfinv(number, moddata.firstchar);
  while (moddata.lenght < moddata.nbmin)
    {
      if (moddata.zero == 1)
	number = my_strcatprintfinv(number, '0');
      else if (moddata.sub == 0)
	number = my_strcatprintfinv(number, ' ');
      else
	number = my_strcatprintf(number, " ");
      moddata.lenght++;
    }
  return (number);
}

char	*edit_my_unumber(char *number, char *mod, t_mod moddata)
{
  moddata.lenght += my_strlenprintf(number);
  moddata = parse_my_mod(mod, moddata);
  if (moddata.lenght < moddata.nbmin)
    number = my_realloc(number, moddata.nbmin);
  if (moddata.firstchar != 'n')
    my_strcatprintfinv(number, moddata.firstchar);
  while (moddata.lenght < moddata.nbmin)
    {
      if (moddata.zero == 1)
	number = my_strcatprintfinv(number, '0');
      else if (moddata.sub == 0)
	number = my_strcatprintfinv(number, ' ');
      else
	number = my_strcatprintf(number, " ");
      moddata.lenght++;
    }
  return (number);
}

char	*edit_my_str(char *str, char *mod)
{
  
}

char	*edit_my_base(char *number, char *mod)
{

}

char	*edit_my_point(char *point, char *mod)
{

}
