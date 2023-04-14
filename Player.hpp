#ifndef __Player_hpp__
#define __Player_hpp__

// common library
#include <iostream>
#include <stdexcept>
#include <vector>
#include <list>
// Objects
#include "Card.hpp"
class Player
{
private:
    
    std::string name;
    // cards that everyone can look
    std::list<Card> rectoCards;
    // only the player can see those cards (the first two and the last one are turned over)
    std::list<Card> allCards;
    int rateOfWinHupper = 0;
    int rateOfWinLower = 0;
    int chips = 0;
    int state = 0; // folds = 1 or play = 0

public:
    Player(std::string,int);
    ~Player();
    void addRectoCard(const Card);
    void addCard(const Card);
    std::list<Card> getPlayerRectoPlayer() const;
    std::list<Card> getPlayerAllPlayer() const;
    void setRateOfWinHupper(const int);
    int getRateOfWinHupper() const;
    void setRateOfWinLower(const int);
    int getRateOfWinLower() const;
    void setChips(const int);
    int getChips() const;

public:
    std::string getName() const;
};
#endif