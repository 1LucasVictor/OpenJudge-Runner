#include <stdio.h>

int main(void) {
    int n,a,b,c,d,count;
    while(1){
        scanf("%d%d",&n,&d);
        if(n==0&&d==0)break;
        count=0;
        for(a=1;a<n+1;a++){
            for(b=1;b<n+1;b++){
                for(c=1;c<n+1;c++){
                    if((a+b+c)==d&&(a!=b)&&(b!=c)&&(c!=a)){
                        count++;
                    }
                }
            }
        }
        printf("%d\n",(count/6));
    }
    return 0;
}