#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 7, 8, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int left = 0;        
    int right = n - 1;   

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            printf("Pair found: %d + %d = %d\n", arr[left], arr[right], target);
            break; 
        } else if (sum < target) {
            left++; 
        } else {
            right--; 
        }
    }

    if (left >= right) {
        printf("No pair found.\n");
    }

    return 0;
}
