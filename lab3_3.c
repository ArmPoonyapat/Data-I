#include <stdio.h>
#include <stdlib.h>

int compareIntegers(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    int W;

    scanf("%d %d", &n, &W);

    int *weights = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &weights[i]);
    }

    qsort(weights, n, sizeof(int), compareIntegers);

    int current_weight = 0;
    int passenger_count = 0;

    for (int i = 0; i < n; i++) {

        if (current_weight + weights[i] <= W) {
            current_weight += weights[i];
            passenger_count++;
        } else {

            break;
        }
    }

    printf("%d\n", passenger_count);

    free(weights);

    return 0;
}
