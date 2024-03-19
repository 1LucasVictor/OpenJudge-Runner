#include <stdio.h>

int Prime(int);

int main()
{
    int n,x,i,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(Prime(x)) cnt++;
    }
    printf("%d\n",cnt);
    
    return 0;
}
int Prime(int x)
{
    int i;
    if(x<2) return 0;
    if(x==2) return 1;
    if(x%2==0) return 0;
    for(i=3;i*i<=x;i+=2){
        if(x%i==0) return 0;
    }
    return 1;
}