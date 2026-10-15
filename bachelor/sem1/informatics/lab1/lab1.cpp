#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

int main() {
    // Настройка консоли Windows для корректного вывода кириллицы в UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    // Настройка вывода вещественных чисел с фиксированной точкой
    cout << fixed << setprecision(10);

    cout << "ЗАДАНИЕ 1" << endl;
    cout << "Вычисление выражения:" << endl;
    cout << "((a - b)^3 - (a^3 - 3ab^2)) / (b^3 - 3a^2b)" << endl;
    cout << "При а = 1000, b = 0.0001" << endl << endl;

    // Вычисления с использованием типа float
    cout << "1. Тип данных: float" << endl;
    float af = 1000.0f;
    float bf = 0.0001f;

    // Промежуточные переменные для задания 1
    float num_f = pow(af - bf, 3) - (pow(af, 3) - 3 * af * bf * bf);
    float den_f = pow(bf, 3) - 3 * af * af * bf;
    float res_f = num_f / den_f;

    cout << "Числитель (float)   = " << num_f << endl;
    cout << "Знаменатель (float) = " << den_f << endl;
    cout << "Результат (float)   = " << res_f << endl << endl;

    // Вычисления с использованием типа double
    cout << "2. Тип данных: double" << endl;
    double ad = 1000.0;
    double bd = 0.0001;

    // Промежуточные переменные для типа double
    double num_d = pow(ad - bd, 3) - (pow(ad, 3) - 3 * ad * bd * bd);
    double den_d = pow(bd, 3) - 3 * ad * ad * bd;
    double res_d = num_d / den_d;

    cout << "Числитель (double)   = " << num_d << endl;
    cout << "Знаменатель (double) = " << den_d << endl;
    cout << "Результат (double)   = " << res_d << endl << endl;

    cout << "ЗАДАНИЕ 2" << endl;
    cout << "Вычисление выражений с инкрементами/декрементами (при n = 5, m = 3):" << endl << endl;

    // 1) n---m
    int n1 = 5, m1 = 3;
    // Компилятор разбирает 'n---m' как 'n - (--m)' (правило жадного разбора)
    int result1 = n1 - (--m1);
    cout << "1) n---m  -> Эквивалентно: n - (--m)" << endl;
    cout << "   Результат: " << result1 << " (новые значения: n = " << n1 << ", m = " << m1 << ")" << endl << endl;

    // 2) m--<n
    int n2 = 5, m2 = 3;
    // Разбор: (m--) < n
    bool result2 = (m2--) < n2;
    cout << "2) m--<n  -> Эквивалентно: (m--) < n" << endl;
    cout << "   Результат: " << boolalpha << result2 << " (новые значения: n = " << n2 << ", m = " << m2 << ")" << endl << endl;

    // 3) n++>m
    int n3 = 5, m3 = 3;
    // Разбор: (n++) > m
    bool result3 = (n3++) > m3;
    cout << "3) n++>m  -> Эквивалентно: (n++) > m" << endl;
    cout << "   Результат: " << boolalpha << result3 << " (новые значения: n = " << n3 << ", m = " << m3 << ")" << endl;

    return 0;
}
