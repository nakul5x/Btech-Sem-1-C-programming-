#include <stdio.h>
int main() {
    printf("int: %zu, float: %zu, double: %zu, char: %zu", 
           sizeof(int), sizeof(float), sizeof(double), sizeof(char));
    return 0;
}
