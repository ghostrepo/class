#include <stdio.h>
#include <math.h>

void main() {
    int n1 = 1;
    int n2 = 5;
    int m1 = 4;
    int m2 = 7;

    float a1 = pow(n1 - m1, 2);
    float a2 = pow(n2 - m2, 2);
    float a3 = sqrt(a1 + a2);

    printf("The distance between point (%d, %d) and point (%d, %d) is %1.2f", n1, n2, m1, m2, a3);
}
