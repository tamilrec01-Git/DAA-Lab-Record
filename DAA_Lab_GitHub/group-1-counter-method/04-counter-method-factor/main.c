#include <stdio.h>
void Factor(int num) {
    int count = 0;
    for (int i = 1; i <= num; ++i) {
        count++;                 /* for condition */
        count++;                 /* loop increment */
        if (num % i == 0) count++;
    }
    count++;                     /* final failed condition */
    printf("%d\n", count);
}
int main(void) {
    int n;
    if (scanf("%d", &n) == 1) Factor(n);
    return 0;
}
