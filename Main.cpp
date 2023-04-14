#include "Table.hpp"
#include "Card.hpp"
#include "Table.hpp"
#include "Player.hpp"
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
                    int i = 8;
                    int j = 0;
                    while (ligne[i] != ' ')
                    {
                        i++;
                    }
                    nom = ligne.substr(8,i-8);
                    i+=2;
                    j = i;
                    while (ligne[j] != ' ')
                    {
                        j++;
                    }
                    int chips = stoi(ligne.substr(i,j-i));
                    std::cout << ligne.substr(i,j-i) << std::endl;
                    Player * player = new Player(nom,chips);
                    t.addPlayer(player);
                    getline(fichier, ligne);
                    //affichage des joeurs et le nombre de leur jetons
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