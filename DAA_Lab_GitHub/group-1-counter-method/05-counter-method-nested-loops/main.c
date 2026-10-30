#include <stdio.h>
void function(int n) {
    int count = 1;
    for (int i = n / 2; i < n; i++) {
        count++;
        for (int j = 1; j < n; j *= 2) {
            count++;
            for (int k = 1; k < n; k *= 2) {
                count++;
                count++;
            }
            count++;
        }
        count++;
    }
    count++;
    printf("%d\n", count);
}
int main(void) {
    int n;
    if (scanf("%d", &n) == 1) function(n);
    return 0;
}
