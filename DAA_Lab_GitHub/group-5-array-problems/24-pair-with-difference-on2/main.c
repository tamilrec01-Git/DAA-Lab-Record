#include <stdio.h>
int main(void) {
    int n, k, found = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[j] - a[i] == k || a[i] - a[j] == k) found = 1;
    printf("%d\n", found);
    return 0;
}
