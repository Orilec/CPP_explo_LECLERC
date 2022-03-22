#ifndef LIEU_CPP
#define LIEU_CPP

#include "lieu.h"
#include <string>
#include <vector>
#include <iostream>


// std::string _name;
// std::string _description;
// int _difficulte;
// std::vector<int> _liste;

Lieu::Lieu()
{
    _name = "inconnu";
    _description = " aucune";
    _difficulte = 0;
    _liste.push_back(' ');
}
Lieu::Lieu(std::string nom, std::string description, int difficulte, std::vector<int> liste){
_name = nom;
_description = _description;
_difficulte = _difficulte;
_liste = liste;

}
std::string Lieu::getName()
{
    return _name;
}
std::string Lieu::getDescription()
{
    return _description;
}
int Lieu::getDifficulte()
{
    return _difficulte;
}
std::vector<int> Lieu::getListe()
{
    return _liste;
}

int Lieu::setEndurance (Lieu nouveauLieu, int endurance){
endurance = endurance - (_difficulte + nouveauLieu.getDifficulte());
return endurance;

}
Lieu Lieu::deplacement( Lieu nouveauLieu)
{
    std::cout << nouveauLieu.getDescription();
    return nouveauLieu;
}

#endif