#include <iostream>        // Підключення бібліотеки для вводу-виводу
#include <cmath>           // Підключення бібліотеки для математичних функцій (sqrt, fabs)
#include "task2.h"         // Підключення заголовочного файлу з описом структури Triangle

using namespace std;       // Простір імен std для зручності

// Метод compute() обчислює довжини сторін, периметр і площу трикутника
void Triangle::compute() {
    // Обчислення довжини сторони a як відстані між точками (x1, y1) і (x2, y2)
    a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

    // Обчислення довжини сторони b як відстані між точками (x2, y2) і (x3, y3)
    b = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));

    // Обчислення довжини сторони c як відстані між точками (x3, y3) і (x1, y1)
    c = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));

    // Периметр трикутника — сума довжин усіх сторін
    perimeter = a + b + c;

    // Обчислення площі за формулою Герона
    double s = perimeter / 2.0;  // Напівпериметр трикутника
    area = sqrt(s * (s - a) * (s - b) * (s - c));  // Формула Герона для площі
}

// Метод print() виводить на екран периметр і площу трикутника
void Triangle::print() {
    cout << "Периметр трикутника: " << perimeter << endl;   // Вивід периметра
    cout << "Площа трикутника: " << area << endl;           // Вивід площі
}
