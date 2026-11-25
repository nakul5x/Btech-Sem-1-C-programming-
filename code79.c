#include <stdio.h>
int main() {
    int n, orig, r, sum = 0, fact, i;
    scanf("%d", &n);
    orig = n;
    while (n > 0) {
        r = n % 10;
        fact = 1;
        for (i = 1; i <= r; i++) fact *= i;
        sum += fact;
        n /= 10;
    }
    if (sum == orig) printf("Strong Number");
    else printf("Not Strong");
    return 0;
}
