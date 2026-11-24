#include <stdio.h>
int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    printf("New num=%d", num ^ (1 << n));
    return 0;
}
