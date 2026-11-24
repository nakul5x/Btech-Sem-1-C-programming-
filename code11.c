#include <stdio.h>
int main() {
    int d;
    scanf("%d", &d);
    printf("Y=%d W=%d D=%d", d/365, (d%365)/7, (d%365)%7);
    return 0;
}
