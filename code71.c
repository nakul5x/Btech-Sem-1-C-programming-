#include <stdio.h>
int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    do {
        cnt++;
        n /= 10;
    } while (n != 0);
    printf("Digits=%d", cnt);
    return 0;
}
