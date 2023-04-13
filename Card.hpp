#ifndef __Card_hpp__
#define __Card_hpp__

#include <iostream>
#include <stdexcept>
#include <vector>
#include <list>

class Card
{
private:
    int number;
    char shape;

public:
    Card(int, char);
    ~Card();
    void setNumber(const int);
    int getNumber() const;
    void setShape(const char);
    char getShape() const;
};

#endif