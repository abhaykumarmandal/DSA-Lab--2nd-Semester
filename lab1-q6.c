#include <stdio.h>
void display(int *mat, int n) {
printf("Your entered matrix is :\n");
for(int i = 0; i < n; i++) {
for(int j = 0; j < n; j++)
printf("%d ", mat[j+i*n]);
printf("\n");
}
}
void nonzero(int *mat, int n) {
int count = 0;
for (int i = 0; i < n*n; i++)
if(mat[i] != 0)
count++;
printf("\nNo. of nonzero elements are %d", count);
}
void sumdiagonal(int *mat, int n) {
int sum = 0;
for(int i = 0; i < n; i++)
for(int j = 0; j < n; j++)
if(j > i)
sum += mat[j+i*n];
printf("\nSum above leading diagonal is %d", sum);
}
void minordiagonal(int *mat, int n) {
printf("\n\nElements below minor diagonal :\n");
for(int i = 0; i < n; i++) {
for(int j = 0; j < n; j++) {
if(j > n-1-i)
printf("%d ", mat[j+i*n]);
}
printf("\n");
}
}
void productdiagonal(int *mat, int n) {
int product = 1;
for(int i = 0; i < n; i++)
for(int j = 0; j < n; j++)
if(j == i)
product *= mat[j+i*n];
printf("\nProduct of diagonal elements is %d", product);
}
void main() {
int n;
printf("Enter the size of square matrix (odd) : ");
scanf("%d", &n);
if(n%2) {
int mat[n][n];
printf("\nFill the %dx%d matrix :\n", n, n);
for(int i = 0; i < n; i++) {
for(int j = 0; j < n; j++) {
printf("Enter element at row %d coloumn %d : ", i+1, j+1);
scanf("%d", mat[i]+j);
}
printf("\n");
}
display(*mat, n);
nonzero(*mat, n);
sumdiagonal(*mat, n);
minordiagonal(*mat, n);
productdiagonal(*mat, n);
}
else
printf("\nInvalid input");
}