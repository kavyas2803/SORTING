#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int a[], int n) {
    int i,j,temp;
    for(i=0;i<n-i;i++)
    {
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main() {
    int a[10], n, i;
    printf("\n Enter the number of elements : ");
    scanf("%d", &n);
    printf("\n Enter the array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    bubble_sort(a,n);

    printf("\n The sorted array elements are: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
