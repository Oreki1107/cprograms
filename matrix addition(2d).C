#include<stdio.h>
#include<conio.h>
void main()
{
int r,co,i,j,a[5][5],b[5][5],c[5][5];
clrscr();
printf("enter the number of rows: ");
scanf("%d",&r);
printf("enter the number of columns: ");
scanf("%d",&co);

printf("enter the elements of the array: ");
for(i=0;i<r;i++){
for(j=0;j<co;j++){
scanf("%d",&a[i][j]);
}}
printf("enter the elements of the array: ");
for(i=0;i<r;i++){
for(j=0;j<co;j++){
scanf("%d",&b[i][j]);
}}
for(i=0;i<r;i++){
for(j=0;j<co;j++){
c[i][j]=a[i][j]+b[i][j];}}

printf("the sum of matrix is :\n");
for(i=0;i<r;i++){
for(j=0;j<co;j++){
printf("%d\t",c[i][j]);
}printf("\n\n\n");}
getch();

}
