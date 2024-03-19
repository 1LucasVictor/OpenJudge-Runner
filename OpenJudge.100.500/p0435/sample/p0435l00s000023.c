#include <stdio.h>
#include <math.h>

int main(void){
    int X[100000] , Y[100000] ;
    int i,N,D;
    int count = 0;
    double distance;

    scanf("%d %d", &N , &D);

    for(i = 0;i < N ;i++)
    {
        scanf("%d %d",&X[i], &Y[i]);
    }


    for ( i = 0; i < N; i++)
    {
        distance = sqrt(pow(X[i],2)  + pow(Y[i],2));
        
        if((double )D >= distance)
        {
            count++;
            
        }
            
    }
    

    printf("%d\n",count);


    return 0;
    
}