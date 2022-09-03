#include<stdio.h>
#include<math.h>
int main()
{
 struct get
 {
 int x1,x2,x3,y1,y2,y3;
 } ;
 struct get a;
 printf(" Enter x1 \n Enter x2 \n Enter x3 \n Enter y1 \n Enter y2 \n Enter y3 \n ");
 scanf("%s %s %S %s %s %s", &a.x1, &a.x2,&a.x3,&a.y1,&a.y2,&a.y3);
 float distance=sqrt((a.x2-a.x1)*(a.x2-a.x1)-(a.y2-a.y1)*(a.y2-a.y1));
 printf(" distance between two point is %.3f",distance );
 float area = 0.5*(a.x1*(a.y2-a.y3)+a.x2*(a.y3-a.y1)+a.x3*(a.y1-a.y2));
 printf(" \n area of triangle is %.3f",area );
}