#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    int x = *(const int *)a, y = *(const int *)b;
    return (x > y) - (x < y);
}
int main(void) {
    int n, m, count = 0, j = 0;
    scanf("%d", &n);
    int g[n];
    for (int i = 0; i < n; i++) scanf("%d", &g[i]);
    scanf("%d", &m);
    int s[m];
    for (int i = 0; i < m; i++) scanf("%d", &s[i]);
    qsort(g, n, sizeof(int), cmp);
    qsort(s, m, sizeof(int), cmp);
    for (int i = 0; i < n && j < m; i++) {
        if (s[j] >= g[i]) { count++; j++; }
    }
    printf("%d\n", count);
    return 0;
}
