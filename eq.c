#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter the number: ");
    scanf("%d",&n1);
    printf("enter the number: ");
    scanf("%d",&n2);

    if(n1==n2){
        printf("the numbers are equal.");
    }
    else{
        printf("the numbers are not equal.");
    }
}