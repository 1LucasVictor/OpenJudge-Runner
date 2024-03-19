#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int max(int a,int b){if(a>b){return a;}return b;}
int min(int a,int b){if(a<b){return a;}return b;}

int main(void){

    double a,b;
    scanf("%lf%lf",&a,&b);
    int z;
    z=a*b;
    printf("%d",z);
}