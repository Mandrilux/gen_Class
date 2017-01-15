//
// main.cpp for  in /root/gen_Class
//
// Made by DESKTOP-0S05REL
// Login   <root@epitech.net>
//
// Started on  Sun Jan 15 17:18:30 2017 DESKTOP-0S05REL
// Last update Sun Jan 15 17:32:08 2017 DESKTOP-0S05REL
//

#include <iostream>
#include "Creator.h"
using namespace std;

void	Creator::createFile()
{

}

int main(int argc, char **argv)
{
  if (argc < 2)
    cerr << "Name Class is require for create file " << endl;
  (void) argv;
  Creator classe();
  return (0);
}
