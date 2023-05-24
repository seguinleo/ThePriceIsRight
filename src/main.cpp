#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    short nbGagnant, nb, essais = 0;
    srand(std::time(nullptr));
    nbGagnant = rand() % 1000 + 1;
    cout << "Salut !" << endl;
    cout << "Saisissez un prix entre 1 et 1000." << endl;
    while (nb != nbGagnant)
    {
        cin >> nb;

        if (!cin)
        {
            cout << "Ce n'est pas un nombre valide..." << endl;
            cin.clear();
            return 0;
            
        } else {
            
            if (nb < nbGagnant)
            {
                cout << "Le prix est plus grand." << endl;
            }
    
            if (nb > nbGagnant)
            {
                cout << "Le prix est plus petit." << endl;
            }
            
            essais++;
        }

        if (nb == nbGagnant)
        {
            char reset;
            cout << "Félicitation, en " << essais << " essais ! On recommence ? (o/n)" << endl;
            cin >> reset;
            if (reset == 'o') {
                nbGagnant = rand() % 1000 + 1;
                cout << "Saisissez un prix entre 1 et 1000." << endl;
            } else {
                return 0;
            }
        }
    }
    return 0;
}
