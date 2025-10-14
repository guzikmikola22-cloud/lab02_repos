// Lab_02.cpp
// <Гузик Микола>
// Лабораторна робота №2.1
// Лінійні програми
// Варіант 15

#include <iostream>
#include <cmath>    // для sqrt()
using namespace std;

int main()
{
    double b;   // вхідний параметр
    double z1;  // результат обчислення 1-го виразу
    double z2;  // результат обчислення 2-го виразу

    cout << "b = ";
    cin >> b;

    // обчислення виразів
    z1 = sqrt(2 * b + 2 * sqrt(b * b - 4)) / (sqrt(b * b - 4) + b + 2);
    z2 = 1 / sqrt(b + 2);

    // вивід результатів
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}
