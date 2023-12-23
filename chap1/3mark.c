#include<stdio.h>
int main(){
    float s1,s2,s3,s4,s5,agr,per;
    printf("enter the marks in 5 subjects: ");
    scanf("%f,%f,%f,%f,%f",&s1,&s2,&s3,&s3,&s5);

    agr=s1+s2+s3+s4+s5;
    per=agr/5;
    printf("the arg mark of student :%f ",agr);
    printf("the percent of student : %f",per);
}