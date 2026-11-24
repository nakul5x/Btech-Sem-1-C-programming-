#include <stdio.h>
int main() {
    char op; float a, b;
    scanf("%f %c %f", &a, &op, &b);
    switch(op) {
        case '+': printf("%.2f", a + b); break;
        case '-': printf("%.2f", a - b); break;
        case '*': printf("%.2f", a * b); break;
        case '/': if (b != 0) printf("%.2f", a / b); else printf("Div by 0"); break;
        default: printf("Invalid Operator");
    }
    return 0;
}
