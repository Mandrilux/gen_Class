/*
** Creator.h for  in /root/gen_Class
**
** Made by DESKTOP-0S05REL
** Login   <root@epitech.net>
**
** Started on  Sun Jan 15 17:22:09 2017 DESKTOP-0S05REL
** Last update Sun Jan 15 20:34:53 2017 
*/

#ifndef __CREATOR_H__ /* si la constante __FICHIER_H__ n'est pas defini entrer dans l'espace */
#define __CREATOR_H__ /* definit la constante __FICHIER_H__ */

/* corps du fichier .h */

#include <string>

class Creator
{
 public:
  Creator(std::string name);
  ~Creator();
  void genHeader() const;
  void genCode() const;
 private:
  std::string _name;
  std::string _uname;
};

#endif /* __CREATOR_H__ */
