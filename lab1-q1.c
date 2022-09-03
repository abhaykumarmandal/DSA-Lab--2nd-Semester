#include <stdio.h>
int main()
{
int i,n;
float sum=0,average,maximum,minimum;
printf("enter the value of n\n");
scanf("%d", &n);
int arr[1000];
printf("enter  %d the numbers\n", n);
for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
printf("array elements \n");
for(i=0;i<n;i++)
{
printf("%d \n", arr[i]);    
 }  
for(i=0;i<n;i++) 
{
    sum+=arr[i];
}
average=sum/n;
minimum=maximum=arr[0];
    for (i=1;i<n;i++) 
    {   
 if(minimum>arr[i])
	  minimum=arr[i];   
	   if(maximum<arr[i])
	    maximum=arr[i]; 
    }  
    printf("\n sum of numbers = %.2f", sum);
    printf("\n average of numbers = %.2f", average);  
    printf("\n maximum of numbers = %.2f", maximum);
    printf("\n minimum of numbers = %.2f", minimum);
 return 0;
}
