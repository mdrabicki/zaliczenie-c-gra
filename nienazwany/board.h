#ifndef BOARD_H
#define BOARD_H
#include<square.h>
#include<QPushButton>
#include<QLayout>
#include<QTextBrowser>
class Board:public QWidget
{
    Q_OBJECT
public:
    Square* squares[15][15];
    Board(QWidget* parent);
    QList<Square*> *squaresList;
    QTextEdit *test;

private:
    //QPushButton *test;
    QGridLayout *layout;
private slots:
 //   void handleSquareClick(QPushButton *sender);

};
#endif // BOARD_H
