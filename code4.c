#include <stdio.h>
int main() {
    int a, b;
    printf("Enter a, b: ");
    scanf("%d %d", &a, &b);
    printf("Sum=%d Sub=%d Mul=%d Div=%d Mod=%d", a+b, a-b, a*b, a/b, a%b);
    return 0;
}
