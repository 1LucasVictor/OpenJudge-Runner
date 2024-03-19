
#include <stdio.h>

int main(void)
{
        int n,d,i,c=0,x,y;
        scanf("%d%d",&n,&d);
        for(i=0;i<n;i++){
                scanf("%d%d",&x,&y);
                if(x*x+y*y<=d*d)c++;
        }
        printf("%d\n",c);
        return 0;
}
