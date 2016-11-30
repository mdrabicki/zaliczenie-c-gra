#include <QApplication>
#include <mainwindow.h>


#include <QFile>



int main(int argc,char **argv){
    QApplication app(argc,argv);


    MainWindow mainWindow;

    mainWindow.showFullScreen();





    return app.exec();
}
