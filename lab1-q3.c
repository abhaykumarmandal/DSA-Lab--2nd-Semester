#include <stdio.h>
int main()
{
    int number,i,r,arr[30];
    printf("Enter the number of elements :");
    scanf("%d",&number);
    printf("Enter the  elements:");
    for(i=0;i<number;i++)
    {
   scanf("%d",&arr[i]);
    }
 printf("Enter items to search:");
 scanf("%d",&r);
   i=0;
    while(i<number && r!=arr[i])
  {
   i++;
    }
 if(i<number)
  {
   printf("element is found in the position = %d",i+1);
 }
  else
   {
   printf("Element not found !");
   }
    return 0;
}
