#include <stdio.h>

int main()
{
        int n;
        float  x1,y1,x2,y2,x3,y3,x4,y4;

        scanf("%d",&n);
        while(n--){
                scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
                printf("%s\n",((x1-x2)/(y1-y2)==(x3-x4)/(y3-y4))?"YES":"NO");
        }
        return 0;
}