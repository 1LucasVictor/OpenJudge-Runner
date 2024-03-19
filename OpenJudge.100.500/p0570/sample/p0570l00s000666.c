
#include <stdio.h>

int main()
{
    int a,b,big,small,x=0;
    scanf("%d%d",&a,&b);
    if(a>b){big=a;small=b;}
    else {big=b;small=a;}
    for(;big>=small;big--){
        if(abs(a-big)==abs(b-big))x=big;
    }
    if(x==0)printf("IMPOSIBLE");
    else printf("%d",x);

    return 0;
}
