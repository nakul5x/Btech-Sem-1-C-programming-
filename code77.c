#include <stdio.h>
int main() {
    int n, max = 0, d;
    scanf("%d", &n);
    while (n > 0) {
        d = n % 10;
        if (d > max) max = d;
        n /= 10;
    }
    printf("Max Digit=%d", max);
    return 0;
}
