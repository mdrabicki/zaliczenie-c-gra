#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QMainWindow>
#include<QPushButton>
#include<QList>
#include<mybutton.h>
#include<QVBoxLayout>
#include<optionswindow.h>
#include<gamewindow.h>

class MainWindow:public QWidget
{
    Q_OBJECT
public:
   MainWindow();

private slots:
    void handleStartButton();
    void handleOptionsButton();
    void handleExitButton();
    void setBackground();
    void setButtonsStyle();
    void createButtons();
    void relocateButtons();
private:
    MainWindow *nowe;
    GameWindow *gameWindow;
    OptionsWindow *optionsWindow;
    QVBoxLayout *layout;
    QList<MyButton*> *buttonsList;
    MyButton *startButton;
    MyButton *optionsButton;
    MyButton *exitButton;
    };

#endif // MAINWINDOW_H
