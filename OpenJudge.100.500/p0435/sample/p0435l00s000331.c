#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, n, dis, res=0;
    scanf("%d %d",&n,&dis);
    for(int i=0; i<n; i++){
        scanf("%d %d",&x,&y);
        if(sqrt(x*x + y*y)<=dis){
            res++;
        }
    }
    printf("%d\n",res);
    return 0;
}