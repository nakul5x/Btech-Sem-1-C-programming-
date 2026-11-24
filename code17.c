#include <stdio.h>
int main() {
    int n, rev;
    scanf("%d", &n);
    rev = (n%10)*100 + ((n/10)%10)*10 + (n/100);
    printf("Rev=%d", rev);
    return 0;
}
