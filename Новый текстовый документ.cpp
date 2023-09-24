Завдання Begin6:
#include <iostream>

int main() {
    double a, b, c;
    std::cout << "Введіть довжини ребер прямокутного паралелепіпеда:\n";
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;

    double volume = a * b * c;
    double surfaceArea = 2 * (a * b + b * c + a * c);

    std::cout << "Об'єм паралелепіпеда: " << volume << std::endl;
    std::cout << "Площа поверхні паралелепіпеда: " << surfaceArea << std::endl;

    return 0;
}

Завдання Begin15:
#include <iostream>

int main() {
    int A, B, C;
    std::cout << "Введіть значення змінних A, B, C:\n";
    std::cout << "A = ";
    std::cin >> A;
    std::cout << "B = ";
    std::cin >> B;
    std::cout << "C = ";
    std::cin >> C;

    int temp = A;
    A = B;
    B = C;
    C = temp;

    std::cout << "Нові значення змінних:\n";
    std::cout << "A = " << A << std::endl;
    std::cout << "B = " << B << std::endl;
    std::cout << "C = " << C << std::endl;

    return 0;
}

