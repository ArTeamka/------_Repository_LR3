#include <iostream>
using namespace std;

void Task1() {
    int a, b, c;
    cout << "Введите длину, ширину и высоту параллелепипеда: ";
    cin >> a >> b >> c;
    cout << "Объем параллелепипеда: " << a * b * c << endl;
}

void Task2() {
    // Реализация задания 2
    cout << "Результат задания 2" << endl;
}

int main() {
    int choice;
    cout << "Выберите задание (1 или 2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            Task1();
            break;
        case 2:
            Task2();
            break;
        default:
            cout << "Неверный выбор" << endl;
    }

    return 0;
}