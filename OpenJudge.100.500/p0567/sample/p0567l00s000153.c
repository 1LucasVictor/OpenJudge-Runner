#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);

    int res= x-y;
    int ans= z-2;
    if(ans>=0)
        printf("%d\n",ans);
    else
        printf("0\n");

    return 0;
}


