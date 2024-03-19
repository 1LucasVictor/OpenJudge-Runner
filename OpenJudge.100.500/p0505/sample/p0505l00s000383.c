#include<stdio.h>
int main(void)
{
    int H,N;
    int i;
    scanf("%d",&H);
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        int A;
        scanf("%d",&A);
        H = H-A;
    }
    if(H<=0){
        puts("Yes");
    }
    else puts("No");
}