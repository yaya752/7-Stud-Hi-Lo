#ifndef __Table_hpp__
#define __Table_hpp__

#include <iostream>
#include <stdexcept>
#include <vector>
#include <list>
#include "Player.hpp"
#include "Card.hpp"
class Table
{
private:
    std::list<Player *> players;
    std::list<Card> cards;
    int pot;
    int rake;

public:
    Table();
    ~Table();
    void getNames(std::ostream &) const;
    void addPlayer(Player *);
    Player *getPlayer(std::string) const;
};

#endif