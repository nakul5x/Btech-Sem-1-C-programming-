#include <stdio.h>
int main() {
    int n, i;
    long term = 1, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += term;
        term = term * 10 + 1;
    }
    printf("Sum=%ld", sum);
    return 0;
}
