#include "h/mainwindow.h"
#include <iostream>
#include <QApplication>

int main(int argc, char *argv[])
{
    std::cout << " Tapez des valeurs : " << std::endl;

    double Co;
     std::cin >> Co;
     std::cout << "la valeur de Co est : " << Co << std::endl;

    int n;
     std::cin >> n;
     std::cout << "la valeur de n est : " << n << std::endl;

    float t;
     std::cin >> t;
    std::cout << "la valeur de t est :  " << t << std::endl;

     double I;
     std::cin >> I;
     I = (Co * t * n)/36000;
     std::cout << "la valeur de I est egal a : " << I << std::endl;



    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
