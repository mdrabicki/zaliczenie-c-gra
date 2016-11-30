#include<gamewindow.h>
#include<board.h>
#include<mainwindow.h>
#include<QFile>
#include<QCoreApplication>
#include<gamecontroller.h>
GameWindow::GameWindow(){
    exit = new QPushButton(this);
    connect(exit,SIGNAL(released()),this,SLOT(handleExitButton()));
    QPixmap pixmap(":/images/backgrounds/gamewindow.jpg");
    QPalette palette;
    palette.setBrush(QPalette::Background,pixmap);
    this->setPalette(palette);



    board = new Board(this);
    gameController= new GameController(board);
    for(QPushButton* button: *board->squaresList){
        connect(button,SIGNAL(released()),this,SLOT(handleSquareClick()));
    }
    QFile file(":/stylesheets/boardFields.qss");
    file.open(QFile::ReadOnly);
    QString style = QLatin1String(file.readAll());
    this->setStyleSheet(style);

}
void GameWindow::handleExitButton(){

    this->hide();
}
void GameWindow::handleSquareClick(){
    QPushButton* button = qobject_cast<QPushButton*>(sender());
  //  gameController->turn=2;
    if((gameController->turn)%2==1){
        button->setText("X");
        button->setDisabled(true);
    }
    else{
        button->setText("O");
        button->setDisabled(true);
    }
    gameController->turn++;


}


