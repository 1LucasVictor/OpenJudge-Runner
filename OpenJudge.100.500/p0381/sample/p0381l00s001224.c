#include <stdio.h>

int main(void){
    int n,x,count=0;
    int s,t,u;
    while(1){
        scanf("%d %d/n",&n,&x);
        if(n==0 && x==0){
            break;
        }else{//s+t+u=x??¨??????????????¢???
            for(s=1;s<=n-2;s++){
                for(t=s+1;t<=n-1;t++){
                    for(u=t+1;u<=n;u++){
                        if(s+t+u == x){
                            count += 1;
                        }
                    }
                }
            }
            printf("%d\n",count);
        }
    }
   return 0; /*?????????*/
}