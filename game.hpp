#ifndef GAME_HPP
#define GAME_HPP
#include <string>
using namespace std;
class game{

private:
     string mapa; // przechowuje mape
     int mapX,mapY,charX,charY;
     char** tab;
public:

    game();
    void pobierzMape(string nazwa);



};
#endif
