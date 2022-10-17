#include "framework.h"

void Controller::move()
{
    int direction = 0;

    cout << "1 pour aller en haut/north\n";
    cout << "2 pour aller en bas/south\n";
    cout << "3 pour aller a gauche/est\n";
    cout << "4 pour aller a droite/ouest\n";
    cin >> direction;

    switch (direction)
    {
    case 1:
        cout << "vous allez en haut/north";
        break;
    case 2:
        cout << "vous allez en bas/south";
        break;
    case 3:
        cout << "vous allez a gauche/est";
        break;
    case 4:
        cout << "vous allez a droite/ouest";
        break;
    }
}