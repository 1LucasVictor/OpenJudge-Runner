#include<stdio.h>
int main()
{
    int a,b,k;
    scanf("%d %d",&a,&b);
    k= (a+b)/2;
    if(abs(a-k)==abs(b-k)){
        printf("%d",k);
    }
    else
        printf("IMPOSSIBLE");
        return 0;
}
