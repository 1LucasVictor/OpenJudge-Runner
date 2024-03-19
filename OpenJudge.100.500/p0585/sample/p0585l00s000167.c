#include<stdio.h>

int main(){
    float a,b,c;
    float t;
    int sum =0;
    scanf("%f %f %f", &a, &b, &t);
    for(int i=1; i*a<t+0.5; i++){
        sum += b;
        c = i;
    }
    printf("%d", sum);
}