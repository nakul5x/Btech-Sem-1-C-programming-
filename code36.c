#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a > b && a < c) || (a > c && a < b)) printf("2nd Max=%d", a);
    else if ((b > a && b < c) || (b > c && b < a)) printf("2nd Max=%d", b);
    else printf("2nd Max=%d", c);
    return 0;
}
