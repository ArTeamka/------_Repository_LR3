#include <iostream>
using namespace std;

void Task1() {
    int a, b, c;
    cout << "Введите длину, ширину и высоту параллелепипеда: " << endl;
    cin >> a >> b >> c;
    cout << "Объем параллелепипеда: " << a * b * c << endl;
}

void Task2() {
    int num;
    cout << "Введите трехзначное число: ";
    cin >> num;
    int secondDigit = (num / 10) % 10;
    int thirdDigit = num % 10;
    cout << "Произведение второй и третьей цифр: " << secondDigit * thirdDigit << endl;
}

int main() {
    setlocale(LC_ALL, "rus");
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