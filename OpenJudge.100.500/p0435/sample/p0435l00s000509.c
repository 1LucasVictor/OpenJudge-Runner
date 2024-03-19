#include <stdio.h>
#include <math.h>

int main(void){
    int X[100000] , Y[100000] ;
    int i,N,D;
    int count = 0;
    double Dis;

    scanf("%d %d", &N , &D);

    for(i = 0;i < N ;i++)
    {
        scanf("%d %d",&X[i], &Y[i]);
    }


    for ( i = 0; i < N; i++)
    {        
        Dis = sqrt(pow(X[i],2.0) + pow(Y[i],2.0));
        if(D >= Dis )
        {
            count++;  
        }
    }
    

    printf("%d\n",count);


    return 0;
    
}