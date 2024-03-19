#include<stdio.h>

int main()
{
    int N, train,taxi;
    int trainTotal;
    scanf("%d",&N);
    scanf("%d",&train);
    scanf("%d",&taxi);
    trainTotal = train *N;

    if(trainTotal >= taxi){
        printf("%d",taxi);
    }else {
        printf("%d",trainTotal);
    }

}