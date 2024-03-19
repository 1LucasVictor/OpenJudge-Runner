#include<stdio.h>
int main()
{
    int n,h=0,m=0,s=0,a;
    scanf("%d",&n);
    if(n<60){
        s=n;
    }
    else if(n<3600){
        m=n/60;
        s=n%60;
    }
    else{
       h=n/(60*60);
       a=n%(60*60);
       m=a/60;
       s=a%60;
    }
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}

