#include <stdio.h>

int main(void)
{
    int D, N;
  
    scanf("%d %d", &D, &N);
    
    if(N!=100){
        //printf("%n\n");
    if(D==0)
        printf("%d\n", N);
    else if(D==1)
        printf("%d\n", 100*N);
    else
        printf("%d\n", 10000*N);}
        

    //system("pause");
    
    return 0;
}
