#include "Player.hpp"
// Constructor and Destructor of the object
Player::Player(std::string name,int chips):name(name),chips(chips)
{
}
Player::~Player() {}
// Add a Card
void Player::addCard(const Card c)
{
    allCards.push_back(c);
}
// Add a Card face up
void Player::addRectoCard(const Card c)
{
    allCards.push_back(c);
    rectoCards.push_back(c);
}
// Return the current Player
std::list<Card> Player::getPlayerAllPlayer() const
{
    return allCards;
}
std::list<Card> Player::getPlayerRectoPlayer() const
{
    return rectoCards;
}
// Adjust the rate of winning the Hupper Player
void Player::setRateOfWinHupper(const int rate)
{
    rateOfWinHupper = rate;
}
// get the rate of winning the Hupper Player
int Player::getRateOfWinHupper() const
{
    return rateOfWinHupper;
}
//Adjust the rate of winning the Lower Player
void Player::setRateOfWinLower(const int rate)
{
    rateOfWinLower = rate;
}
// get the rate of winning the Lower Player
int Player::getRateOfWinLower() const
{
    return rateOfWinLower;
}
// Update the number of ships of the player
void Player::setChips(const int newChips)
{
    chips = newChips;
}
// Get the number of ships of the player
int Player::getChips() const
{
    return chips;
}
std::string Player::getName() const
{
    return name;
}