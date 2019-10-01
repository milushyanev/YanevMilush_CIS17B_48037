#include <QApplication>
#include <QPushButton>

int main (int argc, char **argv)

{
    QApplication app(argc, argv);
   // QPushButton button;

    QWidget window;
    window.setFixedSize(1000,500);

    //QFont font ("Comic Sans MS",41,true);
    //button.setFont(font);


    QPushButton * button = new QPushButton ("hello world", &window);
    button ->setGeometry(10,10,80,30);

    button = new QPushButton("hello everyone", &window);
    button->setGeometry(100,10,100,50);


    //button.setText("My Text");
    //button.setToolTip("A tool tip");

    //QPushButton button2("other", &button);

    window.show();
    //button.show();
    delete button;

    return app.exec();



}

