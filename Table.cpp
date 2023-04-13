#include "Table.hpp"
void Table::getNames(std::ostream &os) const
{
    for (Hand * f : players)
    {
       os << f->getName() << " ";
    }
}
Table::Table(){}
Table::~Table(){}
void Table::addPlayer(Hand * player)
{
    players.push_back(player);
}