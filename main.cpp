#include <iostream>
#include <string>

using namespace std;

int main()
{
    string lieu1 = "forêt";
    string lieu2 = "village";
    string lieu_choisi = " ";
    int choix = 0;

    while (choix != 1 && choix != 2)
    {
        cout << "Où désirez-vous vous rendre? 1 - Forêt  2 - Village " << endl;
        cin >> choix;
    }

    if (choix == 1)
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