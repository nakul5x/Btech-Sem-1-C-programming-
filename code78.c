#include <stdio.h>
int main() {
    int n, orig, r, sum = 0;
    scanf("%d", &n);
    orig = n;
    while (n > 0) {
        r = n % 10;
        sum += r * r * r;
        n /= 10;
    }
    if (sum == orig) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
