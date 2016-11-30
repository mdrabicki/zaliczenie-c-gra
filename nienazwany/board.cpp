#include<board.h>
#include<QList>
Board::Board(QWidget* parent)
{
    test=new QTextEdit("test",parent);
    test->move(300,300);

    layout=new QGridLayout(parent);
  /*  test=new QPushButton();
    layout->addWidget(test);*/
    layout->setHorizontalSpacing(0);
    layout->setVerticalSpacing(0);
    layout->setContentsMargins(520,184,520,184);
    squaresList=new QList<Square*>;
    for(int i=0;i<15;i++){
        for(int j=0;j<15;j++){
            squares[i][j]=new Square(i,j);
            squaresList->append(squares[i][j]);
            squares[i][j]->setText(" ");
            layout->addWidget(squares[i][j],i,j);

        }
    }


}

