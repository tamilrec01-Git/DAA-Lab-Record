#include <stdio.h>
int main(void) {
    int value, count = 0;
    int d[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &value);
    for (int i = 0; i < 9; i++) {
        count += value / d[i];
        value %= d[i];
    }
    printf("%d\n", count);
    return 0;
}
