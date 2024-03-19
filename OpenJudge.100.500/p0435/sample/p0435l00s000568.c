#include <stdio.h>
#include <math.h>

int main()
{
    long int x, y, n, res=0;
    double dis;
    scanf("%ld %lf",&n,&dis);
    for(int i=0; i<n; i++){
        scanf("%ld %ld",&x,&y);
        if(sqrt(x*x + y*y)<=dis){
            res++;
        }
    }
    printf("%ld\n",res);
    return 0;
}