#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,rev[1000];
    int arr[1000];
    printf("\n enter the number of elements:");
    scanf("%d", &n);
    printf("\n enter  the number to store :\n");
for(i=0;i<n;i++)
    {
  scanf("%d", &arr[i]);
    }
for(i=0;i<n;i++)
{
   rev[i]=arr[n-i-1];
}
   printf("\n the  revrse array elements:\n");
   for(i=0;i<n;i++)
{
    printf("%d\t", rev[i]);
} 
return 0;
}