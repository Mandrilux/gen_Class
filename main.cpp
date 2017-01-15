//
// main.cpp for  in /root/gen_Class
//
// Made by DESKTOP-0S05REL
// Login   <root@epitech.net>
//
// Started on  Sun Jan 15 17:18:30 2017 DESKTOP-0S05REL
// Last update Sun Jan 15 20:06:06 2017 
//

/**** Version 0.1 *****/

#include <iostream>
#include <stdlib.h>
#include "Creator.h"

int main(int argc, char **argv)
{
  std::string name;

  (void) argv;
  if (argc < 2)
    {
      std::cerr << "Name Class is require for create file " << std::endl;
      return (EXIT_FAILURE);
    }
  name.assign(argv[1]);
  Creator easy(name);
  easy.genHeader();
  return (0);
}
