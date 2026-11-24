#include <stdio.h>
int main() {
    float c;
    scanf("%f", &c);
    printf("F=%.2f K=%.2f", (c * 9/5) + 32, c + 273.15);
    return 0;
}
