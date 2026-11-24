#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%s", (n & 1) ? "Odd" : "Even");
    return 0;
}
