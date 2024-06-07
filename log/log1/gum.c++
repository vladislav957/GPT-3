cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Инициализация генератора случайных чисел

    int decision = rand() % 2; // Генерация случайного числа 0 или 1

    if (decision == 0) {
        std::cout << "ИИ решил сделать действие А" << std::endl;
    }
    else {
        std::cout << "ИИ решил сделать действие Б" << std::endl;
    }

    return 0;
}