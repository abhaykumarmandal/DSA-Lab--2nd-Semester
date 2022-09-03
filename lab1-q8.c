#include <stdio.h>
struct student
{
    char name[50],address[50];
    int roll;
    float marks[5];
};
int main()
{
    struct student s;
 printf("Enter The Information of Students :\n\n");
  for(int i=0;i<2;i++)  
  {
  printf("Enter Name : ");
    scanf("%s",s.name);  
      printf("enter address :");
    scanf("%s", s.address);
 printf("Enter Roll No. : ");
    scanf("%d",&s.roll); 
printf("enter the marks :", (i+1));
scanf("%f", &s.marks[i]);
  }
      printf("\nDisplaying Information\n");
      for(int i=0;i<2;i++)
    {

 printf("Name: %s\n",s.name);
    printf("Roll: %d\n",s.roll);
    printf("adress %s\n", s.address);
   
    printf("Marks: %.2f\n",s.marks[i]);
    }
    return 0;
}