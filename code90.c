#include <stdio.h>
int main() {
    long long bin;
    int dec = 0, base = 1;
    scanf("%lld", &bin);
    while (bin > 0) {
        dec += (bin % 10) * base;
        bin /= 10;
        base *= 2;
    }
    printf("Decimal=%d", dec);
    return 0;
}
