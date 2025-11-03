#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;

    arr = (int*)malloc(2 * sizeof(int));   // memory for 2 integers
    arr[0] = 10;
    arr[1] = 20;

    printf("Before realloc:\n");
    printf("%d %d\n", arr[0], arr[1]);

    // increase size to 4 integers
    arr = (int*)realloc(arr, 4 * sizeof(int));
    arr[2] = 30;
    arr[3] = 40;

    printf("After realloc:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);  // free memory
    return 0;
}
