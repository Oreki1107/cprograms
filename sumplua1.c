#include<stdio.h>
int main(){
    int sum,rem,num,n,div;
    printf("enter the number:");
    scanf("%d",&n);

    while(n>1){
        num=n%10;
        sum+=num+1;
        div= n/10;

    }
    printf("the sum of digits of %d is: %d",n,sum);
}