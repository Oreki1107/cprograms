#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev=0,rem=0;
clrscr();
printf("enter a number to reverse: ");
scanf("%d",&n);

while(n!=0){
rem=n%10;
rev=rev*10+rem;
n/=10;
}

printf("the reversed number is: %d",rev);
getch();
}










