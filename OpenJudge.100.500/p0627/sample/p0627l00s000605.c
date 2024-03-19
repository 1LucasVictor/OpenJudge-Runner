#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,x,y,z,t;
    while(~scanf("%d %d",&A,&B))
    {
        x=A*B;
        y=A+B;
        z=A-B;
        if(x<y)
            t=y,y=x,x=t;
        if(x<z)
            t=z,z=x,x=t;
        if(y<z)
            t=z,z=y,y=t;
        printf("%d\n",x);
    }
    return 0;
}
