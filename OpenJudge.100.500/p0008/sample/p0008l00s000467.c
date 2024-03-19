#include <stdio.h>
#include <math.h>
int main(){
    while(1){
        int n,i,cnt=0,sw=1,sosuu[100000],t;
        if(scanf("%d",&n)==EOF) break;
        if(n<=1){
            cnt=0;
        }else{
            sosuu[cnt]=2;
            cnt++;
            for(i=3;i<=n;i+=2){
                sw=1;
                for(t=0;t<cnt&&sosuu[t]*sosuu[t]<=i;t++){
                    if(i%sosuu[t]==0){
                        sw=0;
                        break;
                    }
                }
                if(sw==1){
                    sosuu[cnt]=i;
                    cnt++;
                }
            }
             
             
        }
        printf("%d\n",cnt);
         
    }
    return 0;
}