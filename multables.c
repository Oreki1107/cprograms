#include<stdio.h>
int main(){
    int m,i,a,e;
    printf("enter the multiple:");
    scanf("%d",&m);
    printf("enter the ending range:");
    scanf("%d",&e);
    for(i=1;i<=e;i++){
        a=m*i;
        printf("%dx%d=%d\n",m,i,a);
    }
}