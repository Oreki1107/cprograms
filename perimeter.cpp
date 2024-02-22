//perimeter
#include<stdio.h>
int main(){
    //CIRCLE
    printf("\nCIRCLE PERIMETER\n");
    float pe=2*3.14,r;
    printf("enter the radius of the circle:");
    scanf("%f",&r);
    float p;
    p=pe*r;
    printf("\nthe perimeter of the circle is: %f",p);
    
    //RECTANGLE
    printf("\nRECTANGLE PERIMETER\n");
    int l,b;
    printf("\nenter the length of the rectangle:");
    scanf("%d",&l);
    printf("\nenter the breadth of the rectangle:");
    scanf("%d",&b);
    int p1=2*(l+b);
    printf("\nthe perimeter of the ren=ctangle:%d",p1);

    //TRIANGLE
    printf("\nTRIANGLE PERIMETER\n");
    int m,n,o,p2;
    printf("\nenter the side a:");
    scanf("%d",&m);
    printf("\nenter the side b:");
    scanf("%d",&n);
    printf("\nenter the side b:");
    scanf("%d",&o);
    p2=(m+n+o);
  
    printf("\nthe perimeter of the triangle is:%d",p2);

}