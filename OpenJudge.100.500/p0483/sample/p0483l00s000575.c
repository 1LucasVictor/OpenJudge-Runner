#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    if(n>=100 && n<=999){
    a = n%10;
    n = n/10;
    b = n%10;
    c = n/10;
    if(a==7 || b==7 || c==7 )printf("Yes\n");
    else printf("No\n");
    }
    return 0;
}
