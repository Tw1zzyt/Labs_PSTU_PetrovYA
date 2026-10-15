#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    const double epsilon = 1e-4;
    int n = 1;
    double term = 0.1; // a_1 = 10^(-1) * 0!
    double sum = 0.0;

    cout << "Лабораторная работа №2.\n";
    cout << "epsilon = " << epsilon << "\n\n";
    cout << left << setw(8) << "n" << setw(18) << "a_n" << "Сумма\n";

    while (term >= epsilon) {
        sum += term;
        cout << left << setw(8) << n
             << setw(18) << setprecision(10) << term
             << setprecision(10) << sum << '\n';
        ++n;
        term = term * (n - 1) / 10.0;
    }

    cout << "\nИтоговая сумма ряда = " << setprecision(10) << sum << '\n';
    cout << "Первый отброшенный член a_" << n << " = " << term
         << " < epsilon\n";
    return 0;
}
