#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,t,s,u,w;
    while(scanf("%d %d",&a,&b)!=EOF){
        u=a;
        s=b;
        t=a%b;

        while(t!=0){
            a=b;
            b=t;
            t=a%b;
        }
        u=u/b;
        s=s/b;
        w=u*s*b;
        printf("%d %d\n",b,w);
    }
    return 0;
}