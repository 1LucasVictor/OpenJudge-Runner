#include <stdio.h>
int main(void){
    int n,x,i,ii,iii,c=0;
    for(;;){
        scanf("%d %d",&n,&x);
        if(n==0 && x==0)break;
        for(i=1;i<=n-2;i++){
            for(ii=i+1;ii<=n-1;ii++){
                for(iii=ii+1;iii<=n;iii++){
                    if(iii+ii+i==x){
                        c++;
                        //printf("%d %d %d\n",i,ii,iii);
                    }
                }
                
            }
        }
        printf("%d\n",c);
    }
    
    return 0;
}
