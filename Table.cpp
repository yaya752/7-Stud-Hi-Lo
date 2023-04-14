#include "Table.hpp"
void Table::getNames(std::ostream &os) const
{
    for (Player *f : players)
    {
        os << f->getName() << " ";
    }
}
Table::Table() {}
Table::~Table() {
    for (Player *f : players)
    {
        delete f;
    }
}
void Table::addPlayer(Player *player)
{
    players.push_back(player);
}
Player *Table::getPlayer(std::string nom) const
{
    for (Player *f : players)
    {
        if (f->getName() == nom)
        {
            return f;
        }
    }
    return nullptr;
}