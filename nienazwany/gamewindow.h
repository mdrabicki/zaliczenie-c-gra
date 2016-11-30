#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H
#include<QWidget>
#include<board.h>
#include <gamecontroller.h>


class GameWindow:public QWidget
{
Q_OBJECT
public:
    GameWindow();
    GameController *gameController;

    private:
    QPushButton *exit;
    Board *board;

private slots:
    void handleExitButton();
    void handleSquareClick();

};
#endif // GAMEWINDOW_H
