#ifndef SQUARE_H
#define SQUARE_H

#include <QWidget>
#include <QPushButton>

class Square:public QPushButton
{
public:

    Square(int posX,int posY);
    int getPosX();
    int getPosY();
private:
    int posX,posY;

};

#endif // SQUARE_H
