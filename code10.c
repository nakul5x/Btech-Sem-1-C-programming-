#include <stdio.h>
int main() {
    float m1, m2, m3, m4, m5, tot;
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);
    tot = m1 + m2 + m3 + m4 + m5;
    printf("Total=%.1f Avg=%.1f Pct=%.1f%%", tot, tot/5, (tot/500)*100);
    return 0;
}
