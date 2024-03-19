#include<stdio.h>

int main()
{
    int d,n,x,nn=0;

    scanf("%d %d",&d,&n);
    
    if(n==100)
        nn++;
    
    for(x=0;x<d;x++){
        n*=100;
    }
    
    printf("%d\n",n+nn);



    return 0;
}
