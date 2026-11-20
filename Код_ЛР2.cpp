#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
double f(double x) { return 2 - std::cos(x); }
double g(double x) { return std::exp(-x * x); }
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a, b;
    int n;
    std::cout << "Введите число A: ";
    std::cin >> a;
    if (std::cin.fail()) {
        std::cout << "введи число, не буквы";
        return 1;
    }
    std::cout << "Введите число B: ";
    std::cin >> b;
    if (std::cin.fail()) {
        std::cout << "введи число, не буквы";
        return 2;
    }
    std::cout << "Введите число N: ";
    std::cin >> n;
    if (n <= 0) {
        std::cout << "Ошибка: N должно быть больше 0!" << std::endl;
        return 4;
    }
    if (std::cin.fail()) {
        std::cout << "введи число, не буквы";
        return 3;
    }
    if (a == b) {
        std::cout << "| " << std::setw(3) << "0" << " | "
            << std::setw(10) << "0" << " | "
            << std::setw(10) << "0" << " | "
            << std::setw(10) << "0" << " |\n";
    }
    double h = (b - a) / n;
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "+-----+------------+------------+------------+\n";
    std::cout << "|  i  |     xi     |   F(xi)    |   G(xi)    |\n";
    std::cout << "+-----+------------+------------+------------+\n";
    for (int i = 0; i <= n; i++) {
        double xi = a + i * h;
        std::cout << "| " << std::setw(3) << i << " | "
            << std::setw(10) << xi << " | "
            << std::setw(10) << f(xi) << " | "
            << std::setw(10) << g(xi) << " |\n";
    }
    std::cout << "+-----+------------+------------+------------+" << std::endl;
    return 0;
}