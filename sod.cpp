//sum of digits
#include<stdio.h>
int main()
{   
    int i,n,rem,sum;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    printf("\nthe sum of digits of the entered number is:%d",sum);


    

    return 0;
}
