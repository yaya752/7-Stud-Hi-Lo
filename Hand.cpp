#include "Hand.hpp"
// Constructor and Destructor of the object
Hand::Hand(std::string name):name(name)
{
}
Hand::~Hand() {}
// Add a Card
void Hand::addCard(const Card c)
{
    allCards.push_back(c);
}
// Add a Card face up
void Hand::addRectoCard(const Card c)
{
    allCards.push_back(c);
    rectoCards.push_back(c);
}
// Return the current hand
std::list<Card> Hand::getPlayerAllHand() const
{
    return allCards;
}
std::list<Card> Hand::getPlayerRectoHand() const
{
    return rectoCards;
}
// Adjust the rate of winning the Hupper hand
void Hand::setRateOfWinHupper(const int rate)
{
    rateOfWinHupper = rate;
}
// get the rate of winning the Hupper hand
int Hand::getRateOfWinHupper() const
{
    return rateOfWinHupper;
}
//Adjust the rate of winning the Lower hand
void Hand::setRateOfWinLower(const int rate)
{
    rateOfWinLower = rate;
}
// get the rate of winning the Lower hand
int Hand::getRateOfWinLower() const
{
    return rateOfWinLower;
}
// Update the number of ships of the player
void Hand::setChips(const int newChips)
{
    chips = newChips;
}
// Get the number of ships of the player
int Hand::getChips() const
{
    return chips;
}
std::string Hand::getName() const
{
    return name;
}