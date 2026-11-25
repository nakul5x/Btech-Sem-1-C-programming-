#include <stdio.h>
int main() {
    int n, rem;
    long long bin = 0, place = 1;
    scanf("%d", &n);
    while (n > 0) {
        rem = n % 2;
        bin += rem * place;
        n /= 2;
        place *= 10;
    }
    printf("Binary=%lld", bin);
    return 0;
}
