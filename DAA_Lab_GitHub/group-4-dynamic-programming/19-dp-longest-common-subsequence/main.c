#include <stdio.h>
#include <string.h>
int max(int a, int b) { return a > b ? a : b; }
int main(void) {
    char a[1005], b[1005];
    scanf("%1000s %1000s", a, b);
    int n = strlen(a), m = strlen(b), dp[n+1][m+1];
    for (int i = 0; i <= n; i++) dp[i][0] = 0;
    for (int j = 0; j <= m; j++) dp[0][j] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            dp[i][j] = a[i-1] == b[j-1] ? dp[i-1][j-1] + 1 : max(dp[i-1][j], dp[i][j-1]);
    printf("%d\n", dp[n][m]);
    return 0;
}
