#include <stdio.h>

int main() {
    int r1, r2;
    float a, b, c, d, e, t1, t2;

    printf("Student 1 Roll & 5 Marks: ");
    scanf("%d %f %f %f %f %f", &r1, &a, &b, &c, &d, &e);
    t1 = a + b + c + d + e;

    printf("Student 2 Roll & 5 Marks: ");
    scanf("%d %f %f %f %f %f", &r2, &a, &b, &c, &d, &e);
    t2 = a + b + c + d + e;

    printf("Max % Roll: %d\n", (t1 > t2) ? r1 : r2);

    return 0;
}
