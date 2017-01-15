//
// main.cpp for  in /root/gen_Class
//
// Made by DESKTOP-0S05REL
// Login   <root@epitech.net>
//
// Started on  Sun Jan 15 17:18:30 2017 DESKTOP-0S05REL
// Last update Sun Jan 15 17:47:41 2017 DESKTOP-0S05REL
//


/**** Version 0.1 *****/

#include <iostream>
#include "Creator.h"
using namespace std;

Creator::Creator(){}

Creator::~Creator(){}

void	Creator::create(string name_class)
{
  (void) name_class;
}

int main(int argc, char **argv)
{
if (argc < 2)
  cerr << "Name Class is require for create file " << endl;
 Creator classe();
 (void) argv;
 classe.create(string("lol"));
return (0);
}
