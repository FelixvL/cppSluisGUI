#include "game.h"
#include "sluissysteem.h"
#include <string>
#include <cstring>
using namespace std;

Game::Game(QObject *parent) : QObject(parent)
{
    //sluisSysteem = new SluisSysteem();
    //sluisSysteem.getal = 13;
}

void Game::test()
{
      qDebug() << "Hello Hij doet t" << sluisSysteem.getal;// << "en de naam " << sluisSysteem.naam;
 //     return sluisSysteem.naam;
}
int Game::nuString(){
    return 3;
//    return "Gaan";
}
bool Game::doen(){
        return false;
}
