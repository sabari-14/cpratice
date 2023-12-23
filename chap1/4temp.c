#include<stdio.h>
int main(){
    float f,c;
    printf("enter the temp in f:");
    scanf("%f",&f);
    c = (f - 32) * 5/9;
    printf("the temp in c: %f",c);

}