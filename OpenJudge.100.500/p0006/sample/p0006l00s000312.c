#include <stdio.h>
float i,t=10;
int main(void){
    scanf("%f",&i);
    for(;i--;t*=1.05);
    printf("%.f0000\n",t);
}