#include <stdio.h>
#include<stdlib.h>
int n,n1,i,j,k;
void merge_sort(int a[],int b[],int c[])
{
    int temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    i=0;
    j=0;
    k=0;
    while((i<n)&&(j<n1))
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]>b[j])
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n1)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    printf("\n the sorted array is");
    for(i=0;i<k;i++)
      printf("%d",c[i]);
}
int main() {
   int a[10],b[10],c[10];
   printf("\n Enter num of elements in array a");
   scanf("%d",&n);
   printf("\n Enter num of elements in array b");
   scanf("%d",&n1);
   printf("\n Enter array a elements");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("\n enter array b elements");
   for(i=0;i<n1;i++)
   {
       scanf("%d",&b[i]);
   }
   merge_sort(a,b,c);
  

    return 0;
}
