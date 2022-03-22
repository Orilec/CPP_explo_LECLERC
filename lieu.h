#ifndef LIEU_H
#define LIEU_H

#include <string>
#include <vector>

class Lieu {

    protected: 
        std::string _name;
        std::string _description;
        int _difficulte;
        std::vector<int> _liste;

    public: 

        Lieu();
        Lieu(std::string nom, std::string description, int difficulte, std::vector<int> liste);
        std::string getName();
        std::string getDescription();
        int getDifficulte();
        std::vector<int> getListe();
        Lieu deplacement(Lieu nouveauLieu);
        int setEndurance(Lieu nouveauLieu, int endurance);

};

#endif