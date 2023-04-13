#include "Table.hpp"
#include "Card.hpp"
#include "Table.hpp"
#include "Hand.hpp"
#include "Card.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main()
{
    std::ifstream fichier("./file_of_games/game.txt");
    if (fichier)
    {
        std::string ligne;
        std::stringstream ss;
        while (getline(fichier, ligne))
        {
            if (ligne.substr(0, 5) == "Table")
            {
                Table t = Table();
                getline(fichier, ligne);
                
                while (ligne.substr(0, 4) == "Seat")
                {
                    std::string nom = "";
                    int i = 7;
                    while (ligne[i] != ' ')
                    {
                        i++;
                    }
                    nom = ligne.substr(7,i-1);
                    //std::cout << nom << std::endl;
                    Hand * player = new Hand(nom);
                    t.addPlayer(player);
                    getline(fichier, ligne);
                }
                t.getNames(ss);
                std::cout << ss.str() << std::endl;
            }
        }
        
        fichier.close();
    }
    else
    {
        std::cout << "Erreur lors de l'ouverture du fichier" << std::endl;
    }

    return 0;
}