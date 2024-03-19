#include <stdio.h>

int main(void)
{
    int N=0;
    long int D=0;
    int count=0;
    long int x=0;
    long int y=0;

    scanf("%d%ld",&N,&D);
    for(int i=0;i<N;i++){
        scanf("%ld%ld",&x,&y);
        if(x*x+y*y<=D*D) count+=1;
    }

    printf("%d",count);
    return 0;
}
