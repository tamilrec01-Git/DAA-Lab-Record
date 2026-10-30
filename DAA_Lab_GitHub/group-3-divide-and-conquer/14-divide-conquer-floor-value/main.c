#include <stdio.h>
int floorValue(int a[], int low, int high, int x) {
    if (low > high) return -1;
    int mid = low + (high - low) / 2;
    if (a[mid] == x) return a[mid];
    if (a[mid] < x) {
        int right = floorValue(a, mid + 1, high, x);
        return right == -1 ? a[mid] : right;
    }
    return floorValue(a, low, mid - 1, x);
}
int main(void) {
    int n, x;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    printf("%d\n", floorValue(a, 0, n - 1, x));
    return 0;
}
