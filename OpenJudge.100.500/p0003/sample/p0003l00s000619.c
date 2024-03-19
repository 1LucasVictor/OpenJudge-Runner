#include <stdio.h>
int main()
{
    int ret,a,b,c,d,e,f;
    while((ret=scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f))!=EOF)
    {
        float y=(c*d-f*a)/(b*d-e*a),x=(c-b*y)/a;
        printf("%.3f %.3f\n",x,y);
    }
    return 0;
}
