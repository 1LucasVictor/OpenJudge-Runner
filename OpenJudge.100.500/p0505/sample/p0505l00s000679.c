#include<stdio.h>

#define MAX 10000

int main()
{
    int H,N,i;

    double Ai[MAX];

    scanf("%d%d",&H,&N);

    for(i=0;i<N;i++)
    {
        scanf("%lf",&Ai[i]);

        H=H-Ai[i];
    }

    if(H<=0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    

}
