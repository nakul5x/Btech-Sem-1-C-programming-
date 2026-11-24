#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("LSB is %d", n & 1);
    return 0;
}
