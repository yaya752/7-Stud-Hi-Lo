#ifndef __Hand_hpp__
#define __Hand_hpp__

// common library
#include <iostream>
#include <stdexcept>
#include <vector>
#include <list>
// Objects
#include "Card.hpp"
class Hand
{
private:
    // cards that everyone can look
    std::string name;
    std::list<Card> rectoCards;
    // only the player can see those cards (the first two and the last one are turned over)
    std::list<Card> allCards;
    int rateOfWinHupper = 0;
    int rateOfWinLower = 0;
    int chips = 0;
    int state = 0; // folds = 1 or play = 0

public:
    Hand(std::string);
    ~Hand();
    void addRectoCard(const Card);
    void addCard(const Card);
    std::list<Card> getPlayerRectoHand() const;
    std::list<Card> getPlayerAllHand() const;
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