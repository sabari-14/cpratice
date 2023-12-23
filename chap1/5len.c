#include<stdio.h>
int main()
{
    int len,br,rad;
    float area,peri,ac;
    printf("the length of rectangle : ");
    scanf("%d",&len);
    printf("the breadth of rectangle : ");
    scanf("%d",&br);
    printf("the radius of circle : ");
    scanf("%d",&rad);
    area=len*br;
    peri=2*len*br;
    ac=rad*rad;
    printf("the area of rectangle : %f \n",area);
    printf("the perimeter of rectangle : %f \n",peri);
    printf("the area of circcle : %f \n ",ac);
}