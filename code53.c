#include <stdio.h>
int main() {
    int u; float bill;
    scanf("%d", &u);
    if (u <= 50) bill = u * 0.50;
    else if (u <= 150) bill = 25 + (u - 50) * 0.75;
    else if (u <= 250) bill = 100 + (u - 150) * 1.20;
    else bill = 220 + (u - 250) * 1.50;
    printf("Bill=%.2f", bill * 1.20);
    return 0;
}
