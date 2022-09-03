#include <stdio.h>
int main()
{
 int j,i,a,b,c=0,d=2;
 printf("Enter size of array: ");
 scanf("%d",&j);
 printf("Enter elements of array: ");
 int arr[j];
 for(i=0;i<j;i++){
 scanf("%d",&arr[i]);
 }
 printf("\nEnter lower limit element & upper limit element respectively: ");
 scanf("%d %d",&a,&b);
 for(i=0;i<j;i++){
 if(arr[i]==a || arr[i]==b){
 c++;
 d=0;
 }
 if(arr[i]>a && arr[i]<b){
 c++;
 }
}
printf("Number of elements in between two elements (Both Inclusive) = %d",c+d);
printf("the numbers are=%d:",c);
return 0;
}
