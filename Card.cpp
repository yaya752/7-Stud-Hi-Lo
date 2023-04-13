#include "Card.hpp"
// Constructor and Destructor of the object
Card::Card(int num, char sh) : number(num), shape(sh)
{
}
Card::~Card()
{
}
// Set the number of the card
void Card::setNumber(const int num)
{
    number = num;
}
// Get the number of the card
int Card::getNumber() const
{
    return number;
}
// Set the shape of the card
void Card::setShape(const char sh)
{
    shape = sh;
}
// Get the shape of the card
char Card::getShape() const
{
    return shape;
}