#include <stdio.h>

int main() {
    int arr[5] = {10, 5, 8, 20, 3};
    
    int min = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Minimum value = %d\n", min);

    return 0;
}