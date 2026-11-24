#include <stdio.h>
int main() {
    int a = 5, b = 5;
    printf("Pre=%d Post=%d\n", ++a, b++);
    printf("Now a=%d b=%d", a, b);
    return 0;
}
