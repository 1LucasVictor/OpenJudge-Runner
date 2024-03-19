#include <stdio.h>

int main(void)
{
    int a,b=0,c=0,i;
    for(i=0;i<3;i++){
        scanf("%d",&a);
        if(a==5)b++;
        else if(a==7)c++;
    }
    puts(b==2&&c==1?"YES":"NO");
    return 0;
}