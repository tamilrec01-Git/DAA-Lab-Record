#include <stdio.h>
int main(void) {
    int n, k, i = 0, j = 1, found = 0;
    scanf("%d", &n);
    int a[n];
    for (int p = 0; p < n; p++) scanf("%d", &a[p]);
    scanf("%d", &k);
    while (i < n && j < n) {
        if (i == j) { j++; continue; }
        int diff = a[j] - a[i];
        if (diff == k) { found = 1; break; }
        if (diff < k) j++;
        else i++;
    }
    printf("%d\n", found);
    return 0;
}
