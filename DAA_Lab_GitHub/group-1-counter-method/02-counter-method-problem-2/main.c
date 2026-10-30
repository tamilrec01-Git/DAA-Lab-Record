#include <stdio.h>
int main(void) {
    int n, count = 0;
    if (scanf("%d", &n) != 1) return 0;
    count++;                  /* if condition */
    if (n == 0) {
        count++;              /* then-branch statement */
    } else {
        for (int i = 1; i <= n; i++) {
            count++;          /* outer-loop condition/body counter */
            for (int j = 1; j <= n; j++) {
                count++;
                count++;
                break;
            }
            count++;
        }
    }
    count++;
    printf("%d\n", count);
    return 0;
}
