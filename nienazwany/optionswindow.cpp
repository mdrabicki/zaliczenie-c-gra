#include<mybutton.h>
#include<optionswindow.h>
#include<mainwindow.h>
#include<QFile>
#include<QCheckBox>


OptionsWindow::OptionsWindow(){
    createBackButton();
    createCheckBoxes();
    QPixmap background(":/images/backgrounds/optionswindow.jpg");
    QPalette palette;
    palette.setBrush(QPalette::Background,background);
    this->setPalette(palette);
}

void OptionsWindow::createBackButton(){
    backButton = new QPushButton(this);
    backButton->setText("Back");
    QFile file(":/stylesheets/optionsWindowButtons.qss");
    file.open(QFile::ReadOnly);
    QString style = QLatin1String(file.readAll());
    this->setStyleSheet(style);
    connect(backButton,SIGNAL(released()),this,SLOT(handleBackButton()));
}

void OptionsWindow::createCheckBoxes(){
    layout = new QVBoxLayout(this);
    setLayout(layout);
    soundCheckBox=new QCheckBox();
    layout->addWidget(soundCheckBox);
}

void OptionsWindow::handleBackButton(){
    this->hide();
}

