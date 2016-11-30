#ifndef MYBUTTON_H
#define MYBUTTON_H

#include<QPushButton>


class MyButton:public QPushButton
{
    Q_OBJECT
    Q_ENUMS(ButtonType)
public:

    enum ButtonType {Start,Options,Exit};
    explicit MyButton(ButtonType buttonType);


};

#endif // MYBUTTON_H
