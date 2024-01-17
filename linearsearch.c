#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 16;
    int result = linearSearch(arr, n, target);

    if (result != -1) {
        printf("Elemen %d ditemukan pada indeks %d.\n", target, result);
    } else {
        printf("Elemen %d tidak ditemukan dalam array.\n", target);
    }

    return 0;
}
