#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){
    long int N;
    long int D;
    long int n;
    double a;
    double b;
    double x,y;
    int c=0;
    int X[1000000];
    int Y[1000000];

    scanf("%ld",&N);
    //printf("%d",N);
    scanf("%ld",&D);
    //printf("%d",D);
    for(n=0;n<=N-1;n++){

        scanf("%d",&X[n]);
        scanf("%d",&Y[n]);
        //printf("X=%d\n",X[n]);
        //printf("Y=%d\n",Y[n]);
    }
    for(n=0;n<=N-1;n++){
        x=X[n];
        y=Y[n];
        a=pow(x,2.0)+pow(y,2.0);
        //printf("a=%lf\n",a);
        b=sqrtf(a);
        //printf("b=%lf\n",b);
        if(b<=D){
            c++;
        }
    }
    printf("%d",c);
   return 0;
}
