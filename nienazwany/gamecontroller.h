#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H
#include<board.h>

class GameController
{
public:
    GameController(Board* board);
    int turn;
};

#endif // GAMECONTROLLER_H
