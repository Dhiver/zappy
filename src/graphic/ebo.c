/*
** ebo.c for zappy in /home/videau_f/rendu/PSU/PSU_2015_zappy/src/graphic
** 
** Made by Florian Videau
** Login   <videau_f@epitech.net>
** 
** Started on  Sat Jun 25 23:28:44 2016 Florian Videau
** Last update Sat Jun 25 23:35:43 2016 Florian Videau
*/

#include "graphics.h"
#include "send_msg.h"

int	my_ebo(S_CMD_GRAPH_E_ARGS)
{
  send_msg(client_fd, "ebo %d\n", egg->id);
  return (0);
}
