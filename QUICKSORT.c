#include <stdio.h>
#include <stdlib.h>

void quick_sort(int a[], int low, int high) {
    int temp, i, j, pivot;
    if (low < high) {
        i = low;
        j = high;
        pivot = a[low];
        while (1) {
            while (a[i] <= pivot && i < high)
                i++;
            while (a[j] > pivot && j > low)
                j--;
            if (i < j) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            } else {
                break;
            }
        }
        a[low] = a[j];
        a[j] = pivot;
        quick_sort(a, low, j - 1);
        quick_sort(a, j + 1, high);
    }
}

int main() {
    int a[10], n, i;
    printf("\n Enter the number of elements : ");
    scanf("%d", &n);
    printf("\n Enter the array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quick_sort(a, 0, n - 1);

    printf("\n The sorted array elements are: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
