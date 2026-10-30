#include <stdio.h>
int findPair(int a[], int l, int r, int x, int *p, int *q) {
    if (l >= r) return 0;
    int sum = a[l] + a[r];
    if (sum == x) { *p = a[l]; *q = a[r]; return 1; }
    if (sum < x) return findPair(a, l + 1, r, x, p, q);
    return findPair(a, l, r - 1, x, p, q);
}
int main(void) {
    int n, x, p, q;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    if (findPair(a, 0, n - 1, x, &p, &q)) printf("%d\n%d\n", p, q);
    else printf("No\n");
    return 0;
}
