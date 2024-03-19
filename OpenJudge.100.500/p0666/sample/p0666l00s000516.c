#include <stdio.h>
int main()
{
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b);
        if((b-a)>x) printf("dangerous\n");
        else
        {
            if((b-a)<=x&&(b+a)!=x)
                printf("safe\n");
            else
                printf("delicious\n");
        }
    return 0;
}
