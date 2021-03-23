// lesson32.cpp :Задание 2, задача 1F
//Дана функция y=f(x). Найти значение функции по x:
//y = 2x^2 + 10, если x > 5
//y = 0, если x = 0
//y = 2 * | x + 6 | -x^2, если x < 5

#define USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <cmath>

void Filewrite(float y);

int main()
{   
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите x:\n";
    float x, y;
    std::cin >> x;
    if (x > 5) {
        y = 2 * pow(x, 2 / 1) + 10;
    }
    else {
        if ((x < 5) && (x != 0)) {
            y = 2 * abs(x + 6) - pow(x, 2 / 1);
        }
        else {
            if (x == 0) {
                y = 0;
            }
        }
    }
    std::cout << "y=" << y;
    Filewrite(y);

    std::getchar();
    std::getchar();
    return 0;
}

void Filewrite(float y) {
    std::ofstream inFile;
    inFile.open("Answer32.txt");
    inFile << "The y=" << y << std::endl;
    inFile.close();
}
