#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n % 3 == 0 || n % 7 == 0) printf("Multiple");
    else printf("Not Multiple");
    return 0;
}
