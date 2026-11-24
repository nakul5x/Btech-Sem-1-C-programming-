#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if ((n >= 100 && n <= 999) || (n <= -100 && n >= -999)) printf("3-Digit");
    else printf("Not 3-Digit");
    return 0;
}
