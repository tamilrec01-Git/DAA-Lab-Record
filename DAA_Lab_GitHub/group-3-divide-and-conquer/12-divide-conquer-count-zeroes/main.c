#include <stdio.h>
int firstZero(int a[], int low, int high) {
    if (low > high) return -1;
    int mid = low + (high - low) / 2;
    if (a[mid] == 0 && (mid == 0 || a[mid - 1] == 1)) return mid;
    if (a[mid] == 1) return firstZero(a, mid + 1, high);
    return firstZero(a, low, mid - 1);
}
int main(void) {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int p = firstZero(a, 0, n - 1);
    printf("%d\n", p == -1 ? 0 : n - p);
    return 0;
}
