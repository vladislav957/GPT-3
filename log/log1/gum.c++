cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // ������������� ���������� ��������� �����

    int decision = rand() % 2; // ��������� ���������� ����� 0 ��� 1

    if (decision == 0) {
        std::cout << "�� ����� ������� �������� �" << std::endl;
    }
    else {
        std::cout << "�� ����� ������� �������� �" << std::endl;
    }

    return 0;
}