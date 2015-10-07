
#include "game.hpp"
#include <iostream>
#include <fstream>
game::game(){

game::pobierzMape("mapa.txt");

for(int i=0;i<mapY;i++){
for(int j=0;j<mapX;j++){
std::cout <<tab[i][j];
}

}
}
void game::pobierzMape(string nazwa){
    std::ifstream plik(nazwa.c_str());
    plik >> mapX >> mapY >> charX >> charY;

    std::cout << mapX<<"\n";
    game::tab=new char*[mapY];

    for(int i=0;i<mapY;i++){
        tab[i]= new char[mapX];

    }


	for (int i = 0; i<mapY; i++){
		for (int j = 0; j<mapX; j++){

			tab[i][j] = plik.get();

		}
	}
}

