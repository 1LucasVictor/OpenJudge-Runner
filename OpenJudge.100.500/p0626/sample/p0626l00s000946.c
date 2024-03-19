#include <stdio.h>

int main(void)
{
    int D, N;
  
    scanf("%d %d", &D, &N);
    
    if(D==0)
    {
        if(N!=100)
            printf("%d\n", N);
        else
            printf("0\n");
    }
    else if(D==1)
        printf("%d\n", 100*N);
    else
        printf("%d\n", 10000*N);
        

    //system("pause");
    
    return 0;
}