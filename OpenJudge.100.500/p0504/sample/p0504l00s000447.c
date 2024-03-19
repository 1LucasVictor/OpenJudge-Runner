#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float h,a;
    int n;
    scanf("%f %f",&h,&a);
    n=ceil(h/a);
    printf("%d",n);
}
