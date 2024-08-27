#include <stdio.h>
int main() {
    int arr[10] = {12, 45, 7, 23, 56, 89, 34, 21, 67, 10};
    int max_val = arr[0], min_val = arr[0], sum = 0,i,j;
    for (i = 1; i < 10; i++) {
        if (arr[i] > max_val)
            max_val = arr[i];
        if (arr[i] < min_val)
            min_val = arr[i];
        sum += arr[i];
    }
    float avg = (float)sum / 10;

    printf("Maximum value: %d\n", max_val);
    printf("Minimum value: %d\n", min_val);
    printf("Average: %.2f\n", avg);

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
