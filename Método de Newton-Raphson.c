#include <stdio.h>
#include <math.h>

double newtonRaphson(double n) {
    double x = n;
    double raiz;
    while (1) {
        raiz = 0.5 * (x + (n / x));
        if (fabs(raiz - x) < 0.0001)
            break;
        x = raiz;
    }
    return raiz;
}

int main() {
    double n;
    printf("Digite um número: ");
    scanf("%lf", &n);
    printf("A raiz quadrada de %.2lf é aproximadamente %.4lf\n", n, newtonRaphson(n));
    return 0;
}
