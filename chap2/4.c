#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int x, y, degree;
    float r, pi, p;
    printf("Enter the co-ordinate points (x, y): ");
    scanf("%d %d", &x, &y);
    r = sqrt(x*x + y*y);
    pi = atan(y/x);
    printf("The polar co-ordinates of (%d,%d) is (%f, %f)",x, y, r, pi);
    p = 3.141592;
    degree = pi * (180/p);
    printf("\nThe polar co-ordinates in Degree: (%f, %d)", r, degree);
    return 0;
}