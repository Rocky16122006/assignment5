#include <stdio.h>

int main() {
    int arr[5] = {10, 5, 8, 20, 3};
    
    int max = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum value = %d\n", max);
 
    return 0;
}