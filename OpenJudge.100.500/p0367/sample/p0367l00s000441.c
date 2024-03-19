#include <stdio.h>
int main(void)
{
    int a,b,c,x,y;
    scanf("%d %d %d",&a,&b,&c);
    y=0;
    for(x=a;x<=b;x++){
        if(c%x==0)y++;
        
    }
            printf("%d\n",y);
    return 0;
}

