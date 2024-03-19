#include <stdio.h>
#include <stdio.h>

int main()
{
    int q,t,f;
    while(~scanf("%d %d %d",&q,&t,&f))
    {
        if(f>=q&&f<=q+t)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}