#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void conjecturaGoldbach(int inicio, int fim) {
    for (int n = inicio; n <= fim; n += 2) {
        for (int i = 2; i < n; i++) {
            if (ehPrimo(i) && ehPrimo(n - i)) {
                printf("%d = %d + %d\n", n, i, n - i);
                break;
            }
        }
    }
}

int main() {
    conjecturaGoldbach(700, 1100);
    return 0;
}
