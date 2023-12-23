#include<stdio.h>
int main()
{
    float km,m,cm,f,in;
    printf("enter the distance btw place : ");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    f=m*3.28;
    in=f*12;
    printf("distance in m:%f m \n",m);
    printf("distance in cm:%f cm \n",cm);
    printf("distance in f:%f f \n",f);
    printf("distance in m:%f inch \n",in);

}