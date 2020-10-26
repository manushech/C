#define _CRT_SECURE_NO_WARNINGS
#define N 5
#include <stdio.h>

void reverse(int arr[], size_t count) {
    int temp;
    for (int i = 0; i < N/2; i++) {
        temp = arr[i];
        arr[i]=arr[N-1-i];
        arr[N-1-i] = temp;
    }

}

int main() {
    int arr[5];
    for (int i = 0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    reverse(arr, N);
    for (int i = 0; i<N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
