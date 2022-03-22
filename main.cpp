#include <iostream>
#include <string>
#include "lieu.cpp"
#include <vector>

using namespace std;

int main()
{
    int choix;
    bool gameOver = false;
    bool possible = false;
    Lieu *lieu1 = new Lieu("Forêt", "Ceci est une forêt", 9, {1, 2});
    Lieu *lieu2 = new Lieu("Village", "Ceci est un village", 3, {0, 2});
    Lieu *lieu3 = new Lieu("Volcan", "Ceci est un volcan", 17, {0});
    vector<Lieu> listeLieux = {*lieu1, *lieu2, *lieu3};

    Lieu *lieu_actuel = lieu1;

    

    while (!gameOver)
    {
        while (!possible)
        {
            bool possible = false;
            cout << "Vous êtes actuellement ici: " + lieu_actuel->getName() << endl;
            cout << "Où voulez vous vous rendre? " << endl;
            cin >> choix;
            for (int j = 0; j < lieu_actuel->getListe().size(); j++)
            {
                if (lieu_actuel->getListe().at(j) == choix)
                {
                    possible = true;
                }
            }
            if (possible)
            {
                *lieu_actuel = lieu_actuel->deplacement(listeLieux.at(choix));
            }
            else
            {
                cout << "Ce lieu n'est pas accessible" << endl;
            }
        }
    }

    return 0;
}