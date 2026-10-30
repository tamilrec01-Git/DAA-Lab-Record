#include <stdio.h>
int max(int a, int b) { return a > b ? a : b; }
int main(void) {
    int n;
    scanf("%d", &n);
    long long a[n][n], dp[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) scanf("%lld", &a[i][j]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) dp[i][j] = a[i][j];
            else if (i == 0) dp[i][j] = dp[i][j-1] + a[i][j];
            else if (j == 0) dp[i][j] = dp[i-1][j] + a[i][j];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + a[i][j];
        }
    }
    printf("%lld\n", dp[n-1][n-1]);
    return 0;
}
