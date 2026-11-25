#include <stdio.h>
int main() {
    int base, exp, i;
    long long res = 1;
    scanf("%d %d", &base, &exp);
    for (i = 1; i <= exp; i++) res *= base;
    printf("Res=%lld", res);
    return 0;
}
