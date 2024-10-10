#include <stdio.h>

// Функция для вычисления f(x) = x^2 + 2x + 3
double f(double x) {
    return x * x + 2 * x + 3;
}

// Функция для численного вычисления определенного интеграла
// методом правых прямоугольников
double integrate(double a, double b, int n) {
    double h = (b - a) / n;  // Шаг разбиения
    double result = 0.0;
    for (int i = 1; i <= n; i++) {
        double x = a + i * h;  // Правая граница каждого прямоугольника
        result += f(x);
    }
    result *= h;  // Умножаем сумму на шаг
    return result;
}

int main() {
    double a, b;
    int n;
    // Ввод интервала интегрирования и количества разбиений
    printf("Введите a: ");
    scanf("%lf", &a);
    printf("Введите b: ");
    scanf("%lf", &b);
    printf("Введите количество разбиений (точность): ");
    scanf("%d", &n);
    // Вычисление интеграла
    double result = integrate(a, b, n);
    printf("Приближенное значение интеграла на интервале [%lf, %lf]: %lf\n", a, b, result);
    return 0;
}
