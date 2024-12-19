#include <stdio.h>
#include <math.h>

// Функция для расчета периметра равнобедренной трапеции
double calculatePerimeter(double a, double b, double h) {
    double side = sqrt(pow((a - b) / 2.0, 2) + pow(h, 2));
    return a + b + 2 * side;
}
int main() {
    double a, b, h;
    // Ввод оснований и высоты трапеции
    printf("Введите основание a: ");
    scanf("%lf", &a);
    printf("Введите основание b: ");
    scanf("%lf", &b);
    printf("Введите высоту h: ");
    scanf("%lf", &h);
    // Расчет периметра
    double perimeter = calculatePerimeter(a, b, h);
    // Вывод результата
    printf("Периметр равнобедренной трапеции: %.2lf\n", perimeter);
    return 0;
}
