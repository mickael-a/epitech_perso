/*
** main.c for epikong in /home/belia-_r/afs/Rush/psu-rush1-2015-belia-_r
**
** Made by belia-_r
** Login   <belia-_r@epitech.net>
**
** Started on  Sat Mar  3 13:13:42 2012 belia-_r
** Last update Sun Mar  4 21:19:14 2012 belia-_r
*/

#include "epikong.h"

int		main(int argc, char **argv)
{
  SDL_Surface	*win;

  if (argc != 2 && argc != 1)
    return (EXIT_FAILURE);
  else
    {
      if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER) == -1)
	{
	  fprintf(stderr, "Error during SDL initialisation: %i\n", 33);
	  return (EXIT_FAILURE);
	}
      if (argc == 1)
	{
	  win = create_win(900, 729);
	  return (launch_menu(win));
	  run("data/map_1.txt");
	}
      else
	run(argv[1]);
      SDL_Quit();
      return (EXIT_SUCCESS);
    }
}
