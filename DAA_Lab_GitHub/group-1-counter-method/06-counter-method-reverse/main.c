#include <stdio.h>
void reverseCount(int n) {
    int rev = 0, remainder, count = 2;
    while (n != 0) {
        count++;
        count++;
        remainder = n % 10;
        count++;
        rev = rev * 10 + remainder;
        count++;
        n /= 10;
    }
    count++;
    printf("%d\n", count);
}
int main(void) {
    int n;
    if (scanf("%d", &n) == 1) reverseCount(n);
    return 0;
}
