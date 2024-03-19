#include<stdio.h>
int main()
{
    int a,b,k=9;
    scanf("%d %d",&a,&b);
    if(abs(a-k)==abs(b-k)){
        printf("%d",k);
    }
    else
        printf("IMPOSSIBLE");
        return 0;
}
