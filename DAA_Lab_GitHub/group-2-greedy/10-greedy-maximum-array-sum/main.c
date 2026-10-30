#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    int x = *(const int *)a, y = *(const int *)b;
    return (x > y) - (x < y);
}
int main(void) {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), cmp);
    long long sum = 0;
    for (int i = 0; i < n; i++) sum += (long long)a[i] * i;
    printf("%lld\n", sum);
    return 0;
}
