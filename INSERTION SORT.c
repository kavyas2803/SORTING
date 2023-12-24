#include <stdio.h>
#include <stdlib.h>
void insertion_sort(int a[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }

        a[j + 1] = key;
    }
}
int main() {
    int a[10], n, i;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    insertion_sort(a, n);
    printf("\nThe sorted array elements are: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
