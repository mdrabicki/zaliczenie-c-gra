#include<mybutton.h>
#include<QWidget>
#include<QMainWindow>
#include<QStyle>
#include <QApplication>
#include<QFile>
MyButton::MyButton(ButtonType buttonType):QPushButton(){

    switch (buttonType) {
    case ButtonType::Start:
        this->setText("Start");
        break;
    case ButtonType::Options:
        this->setAccessibleName("optionsButton");
        this->setText("Options");
        break;
    case ButtonType::Exit:
        this->setAccessibleName("exitButton");
        this->setText("Exit");
        break;
    default:
        break;
    }
}
