#include <stdio.h>
#include <stdlib.h>
int cmpDesc(const void *a, const void *b) {
    long long x = *(const int *)a, y = *(const int *)b;
    return (x < y) - (x > y);
}
int main(void) {
    int n;
    scanf("%d", &n);
    int c[n];
    for (int i = 0; i < n; i++) scanf("%d", &c[i]);
    qsort(c, n, sizeof(int), cmpDesc);
    long long total = 0, multiplier = 1;
    for (int i = 0; i < n; i++, multiplier *= 2)
        total += multiplier * c[i];
    printf("%lld\n", total);
    return 0;
}
