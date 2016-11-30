#include<mainwindow.h>
#include<mybutton.h>

#include<optionswindow.h>

#include <QPushButton>
#include <QStyle>
#include <QDesktopWidget>
#include<QCoreApplication>
#include<QMouseEvent>
#include<QBoxLayout>
#include<QFile>
#include<QList>
#include<QLayout>
#include<QSpacerItem>
#include<QTextStream>


MainWindow::MainWindow(){

    gameWindow=new GameWindow();
    setBackground();
    createButtons();
    setButtonsStyle();
    relocateButtons();
    }



void MainWindow::handleExitButton(){
    qApp->exit();

}
void MainWindow::handleOptionsButton(){
      optionsWindow=new OptionsWindow();
      optionsWindow->showFullScreen();
}
void MainWindow::handleStartButton(){

    gameWindow->showFullScreen();
}

void MainWindow::setButtonsStyle(){
    QFile file(":/stylesheets/mainWindowButtons.qss");
    file.open(QFile::ReadOnly);
    QString style = QLatin1String(file.readAll());
    style.replace("QPushButton","MyButton");
    QFile zapis("test.txt");
    zapis.open(QIODevice::ReadWrite);
    QTextStream stream(&zapis);
    stream<<style<<endl;


    this->setStyleSheet(style);
}

void MainWindow::setBackground(){
    QPixmap background(":/images/backgrounds/mainwindow.jpg");
    QPalette palette;
    palette.setBrush(QPalette::Background,background);
    this->setPalette(palette);
}
void MainWindow::relocateButtons(){
    layout=new QVBoxLayout(this);

    setLayout(layout);
    for(MyButton* button: *buttonsList){
        layout->addWidget(button);
    }
    layout->setAlignment(Qt::AlignHCenter);


}

void MainWindow::createButtons(){
    buttonsList= new QList<MyButton*>;

    startButton=new MyButton(MyButton::ButtonType::Start);
    buttonsList->append(startButton);
    connect(startButton,SIGNAL(released()),this,SLOT(handleStartButton()));

    optionsButton=new MyButton(MyButton::ButtonType::Options);
    buttonsList->append(optionsButton);
    connect(optionsButton,SIGNAL(released()),this,SLOT(handleOptionsButton()));

    exitButton=new MyButton(MyButton::ButtonType::Exit);
    connect(exitButton, SIGNAL (released()),this, SLOT (handleExitButton()));
    buttonsList->append(exitButton);
}

