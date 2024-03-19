#include<stdio.h>
int main(){
    int i,u,t,n,x,count = 0,sum2 = 0,sum3 = 0;
    for(;;){
        scanf("%d %d",&n,&x);
        if( n == 0 && x == 0){
            break;
        }
        for( i = 1 ; i <= n ; i += 1){
            for( u = 1 ; u <= n ; u += 1){
                sum2 = i + u;
                if( i == u ){
                    continue;
                }
                else{
                    for( t = 1 ; t <= n ; t += 1){
                        sum3 = sum2 + t;
                        if( i == t || u == t){
                            continue;
                        }
                        else if( sum3 == x){
                            count += 1;
                        }
                    }
                }
            }
        }
        printf("%d\n",count / 6);
    }
    return 0;
}