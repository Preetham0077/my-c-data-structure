#include <stdio.h>
#include <time.h>

int main() {
    int n, i;
    clock_t start, end;
    double time_taken;

    printf("Enter n: ");
    scanf("%d", &n);

    start = clock();  // start timer

    for (i = 0; i < n; i++) {
        // simple operation
    }

    end = clock();  // end timer

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time taken for O(n): %f seconds\n", time_taken);

    return 0;
}

Enter n: 4
Time taken for O(n): 0.000035 seconds
