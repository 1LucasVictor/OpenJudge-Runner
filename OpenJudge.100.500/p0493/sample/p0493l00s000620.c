#include<stdio.h>
#include<stdlib.h>

int main(){
    int x;
    int sat=0;
    scanf("%d",&x);
    sat = x/500;
    sat *=1000;
    x = x%500;
    int temp;
    temp = x/5 ;
    temp *=5;

    sat = sat +temp;

    printf("%d",sat);
    return 0;

}