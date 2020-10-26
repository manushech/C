//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int n) {
    int prev = 1;
    int prev2 = 0;
    int res = 0;
    for (int i = 0; i < n; i++) {
        res = prev + prev2;
        prev2 = prev;
        prev = res;
    }
    return res;
}

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0)
        printf("&d", 0);
    else if (n == 1)
        printf("&d", 1);
    else if (n >= 2)
        printf("%d", fibonacci(n));
}
