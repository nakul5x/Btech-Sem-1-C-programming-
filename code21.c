#include <stdio.h>
int main() {
    int a, b, c, m;
    scanf("%d %d %d", &a, &b, &c);
    m = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Max=%d", m);
    return 0;
}
