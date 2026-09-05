#include <stdio.h>

int main() {
    int total_sec, h = 0, m = 0, s = 0;

    printf("Enter seconds: ");
    scanf("%d", &total_sec);

    if (total_sec >= 3600) {
        h = total_sec / 3600;
        m = (total_sec % 3600) / 60;
        s = total_sec % 60;
    } else if (total_sec >= 60) {
        m = total_sec / 60;
        s = total_sec % 60;
    } else {
        s = total_sec;
    }

    printf("Time: %d Hours, %d Mins, %d Sec\n", h, m, s);

    return 0;
}