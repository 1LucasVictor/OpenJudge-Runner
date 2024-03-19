#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d %d %d",&n, &a, &b);
  c=n*a;
    if(c<b){
        printf("%d",c);
    }else{
        printf("%d",b);
    }
    return 0;
}
    