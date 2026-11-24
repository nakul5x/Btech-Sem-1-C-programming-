#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Q=%d R=%d", a / b, a % b);
    return 0;
}
