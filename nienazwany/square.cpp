#include "square.h"


Square::Square(int posX, int posY)
{
    this->posX=posX;
    this->posY=posY;
}

int Square::getPosX()
{
    return posX;
}
int Square::getPosY()
{
    return posY;
}
