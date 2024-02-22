#include <stdio.h>
int main(){
    int i,e,n1=0,n2=1,n3;
    printf("enter the ending of series:");
    scanf("%d",&e);
    n3=n1+n2;
    for(i=3;i<=e;i++){
        printf("%d,",n3);
        n1=n2;
        n2=n3;
        n3=n1+n2;
        
    }
}