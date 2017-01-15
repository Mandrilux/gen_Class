//
// Creator.cpp for  in /home/baptiste/rendu/gen_Class
//
// Made by
// Login   <baptiste@epitech.net>
//
// Started on  Sun Jan 15 19:33:24 2017
// Last update Sun Jan 15 20:30:27 2017 
//

#include "Creator.h"
#include <iostream>
#include <fstream>

Creator::Creator(std::string name)
{
  _name = name;
  _uname.resize(name.size());
   for (size_t i = 0; i < name.size(); i++)
    _uname.at(i) = toupper(name.at(i));
}

Creator::~Creator(){}

void Creator::genHeader() const
{
  std::string fileHeader;

  fileHeader = _name + ".h";
  std::ofstream file(fileHeader.c_str(), std::ios::out);
  if (file)
    {
      file << "#ifndef __"<<_uname<<"_H_" << std::endl;
      file << "#define __"<<_uname<<"_H_" << std::endl << std::endl;
      file << "class " << std::endl;
      file << "{" << std::endl << std::endl;;
      file << "    /* Constructeur et destructeur */   " <<std::endl << std::endl;
      file << "\tpublic:" << std::endl<< std::endl;
      file << "\t\t" << _name << "()" << std::endl;
      file << "\t\t~" << _name << "()" << std::endl << std::endl;
      file << "    /* Atribut membre  */   " <<std::endl << std::endl;
      file << "\tprivate:" << std::endl;
      file << "};" << std::endl;
      file.close();
      std::cout << "[+] Le Fichier " << fileHeader << " a correctement etais generer" << std::endl;
    }
  else
    std::cerr << "[-] Impossible de creer le fichier " << fileHeader << std::endl;
}
