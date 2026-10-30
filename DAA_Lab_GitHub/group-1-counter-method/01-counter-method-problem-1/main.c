#include <stdio.h>
int main(void) {
    int n, s = 0, count = 0;
    if (scanf("%d", &n) != 1) return 0;
    while (s < n) {
        count++;              /* condition check */
        s++;
        count++;              /* loop-body operation */
    }
    count++;                  /* final failed condition */
    printf("%d\n", count);
    return 0;
}
