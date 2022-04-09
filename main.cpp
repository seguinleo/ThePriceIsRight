#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int main()

{
    srand(time(NULL));
    short nbGagnant, nb;
    nbGagnant = rand() %1000 + 1;
    cout<<"Salut BG !"<<endl;
    while (nb!=nbGagnant)
    {
            cout<<"Saisissez un nombre entre 1 et 1000."<<endl;
            cin>>nb;

            if (nb<nbGagnant)
            {
                cout<<"Le nombre gagnant est plus grand ! Recomencez."<<endl;
            }
            if (nb>nbGagnant)
            {
                    cout<<"Le nombre gagnant est plus petit. Recomencez."<<endl;
            }

            if (nb==nbGagnant)
            {
                    cout<<"Felicitation ! Vous avez trouve le nombre gagnant ! Vous n'avez rien gagne par contre ;)"<<endl;
            }
            system("PAUSE");
    }
    return 0;
}
