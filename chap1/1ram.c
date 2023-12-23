#include<stdio.h>
int main()
{
    int bs;
    float hr,da,gs;
    printf("enter the basic salary : ");
    scanf("%d",&bs);
    da=0.4 * bs;
    hr=0.2*bs;
    gs=bs+da+hr;
    printf("the gross salary of ramesh:%f",gs);
}