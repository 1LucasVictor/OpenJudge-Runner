#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){
    long int N;
    long int D;
    long int n;
    float a;
    float b;
    int c=0;
    float X[1000000];
    float Y[1000000];

    scanf("%ld",&N);
    //printf("%d",N);
    scanf("%ld",&D);
    //printf("%d",D);
    for(n=0;n<=N-1;n++){
        scanf("%f",&X[n]);
        scanf("%f",&Y[n]);
        //printf("X=%lf\n",X[n]);
        //printf("Y=%lf\n",Y[n]);
    }
    for(n=0;n<=N-1;n++){
        a=powf(X[n],2.0)+powf(Y[n],2.0);
       // printf("a=%lf\n",a);
        b=sqrtf(fabsf(a));
       // printf("b=%lf\n",b);
        if(b<=D){
            c++;
        }
    }
    printf("%d",c);
   return 0;
}