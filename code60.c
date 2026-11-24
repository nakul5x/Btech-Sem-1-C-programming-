#include <stdio.h>
int main() {
    int amt;
    scanf("%d", &amt);
    if (amt >= 500) { printf("500:%d ", amt/500); amt %= 500; }
    if (amt >= 200) { printf("200:%d ", amt/200); amt %= 200; }
    if (amt >= 100) { printf("100:%d ", amt/100); amt %= 100; }
    if (amt >= 50)  { printf("50:%d ", amt/50);   amt %= 50; }
    if (amt >= 10)  { printf("10:%d ", amt/10);   amt %= 10; }
    if (amt > 0)    { printf("1:%d", amt); }
    return 0;
}
