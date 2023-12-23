#include<stdio.h>
#include<math.h>
int main()
{

    float a,b,c,sum,area;
    printf("enter the sides of triangle : ");
    scanf("%f %f %f",&a,&b,&c);
    sum=(a+b+c)/3;
    area=sqrt(sum*(sum-a)*(sum-b)*(sum-c));
    printf("area of rectangle : %f",area);

}