#include <stdio.h>

int main(int argc, const char * argv[])
{
    int large,small,tmp,a,b,r;
    while(scanf("%d %d",&large,&small)!=EOF){
        if(large<small){
            tmp = large;
            large = small;
            small = tmp;
        }
        a=large;
        b=small;
        
        r=1;
        while( r!=0 ){
            r=a%b;
            a=b;
            b=r;
        }
        
        b=large/a*small;
        printf("%d %d\n",a,b);
    }
    return 0;
}