#include <stdio.h>

int main() {
    int n,a[100],i,j,temp,min;
    printf("\n Enter num");
    scanf("%d",&n);
    printf("\n Enter the num of elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
           if(a[j]<a[min])
          
               min=j;
          
        }
           if(min!=i)
           {
               temp=a[i];
               a[i]=a[min];
               a[min]=temp;
           }
       
    }
    printf("\n The sorted array is");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
