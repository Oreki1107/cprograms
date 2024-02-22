//sum of even numbers from 1 to 100
#include<stdio.h>
int main(){
    int num=100,sum,i=1;
    for(i;i<=num;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("\nthe sum of all even numbers from 1 to 100 is:%d",sum);

}