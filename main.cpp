#include <iostream>
#include <string>

using namespace std;

int main()
{
    string lieu1 = "forêt";
    string lieu2 = "village";
    string lieu_choisi = " ";
    string choix = "";

    while (choix != "FORET" && choix != "VILLAGE")
    {
        cout << "Où désirez-vous vous rendre? -FORET  - VILLAGE " << endl;
        cin >> choix;
    }

    if (choix == "FORET")
    {
        lieu_choisi = lieu1;
    }
    else
    {
        lieu_choisi = lieu2;
    }

    cout << "Vous arrivez à " + lieu_choisi << endl;

    return 0;
}