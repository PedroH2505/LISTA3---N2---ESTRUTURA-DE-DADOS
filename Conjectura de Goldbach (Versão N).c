#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void conjecturaGoldbach(int limite) {
    for (int n = 4; n <= limite; n += 2) {
        for (int i = 2; i < n; i++) {
            if (ehPrimo(i) && ehPrimo(n - i)) {
                printf("%d = %d + %d\n", n, i, n - i);
                break;
            }
        }
    }
}

int main() {
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    conjecturaGoldbach(N);
    return 0;
}
