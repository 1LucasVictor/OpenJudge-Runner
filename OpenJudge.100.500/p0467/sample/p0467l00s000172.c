#include <stdio.h>
int main(void){
    // Your code here!
    int a,b,c,k;
    int ans = 0;
    scanf("%d%d%d%d",&a,&b,&c,&k);
    //printf("%d%d%d%d",a,b,c,k);
    if(k <= a)
    {
        ans += k;
    }
    else if(k <= a + b)
    {
        ans += a;
    }
    else
    {
        int d;
        d = k - (a + b);
        ans += a - d;
    }
    printf("%d\n",ans);
}
