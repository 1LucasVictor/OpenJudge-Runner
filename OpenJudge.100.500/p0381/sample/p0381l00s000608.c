#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,x,a,b,c,sum=0;
    while(1){
        scanf("%d %d",&n,&x);
        if(n==0&&x==0){
            break;
        }
        for(c=3;c<=n;c++){
            for(b=2;b<c;b++){
                a=x-b-c;
                if(a<b&&a>0){
                    sum++;
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}