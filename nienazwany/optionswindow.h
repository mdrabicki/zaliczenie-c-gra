#ifndef OPTIONSWINDOW_H
#define OPTIONSWINDOW_H

#include<QMainWindow>
#include<QWidget>
#include<QPushButton>
#include<QVBoxLayout>
#include<QCheckBox>
class OptionsWindow:public QWidget{
    Q_OBJECT
public:
    OptionsWindow();
private:
    QPushButton *backButton;
    void createBackButton();
    void createCheckBoxes();
    QVBoxLayout *layout;
    QCheckBox *soundCheckBox;

private slots:
    void handleBackButton();

};

#endif // OPTIONSWINDOW_H
