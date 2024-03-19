#include <stdio.h>

int main(void){

        int a,b,c,k;
        scanf("%d%d%d%d",&a,&b,&c,&k);
        int ans = 0;

        for(int i=1;i<=k;i++){
                if(a>0){
                        a = a-1;
                        ans = ans+1;
                }else if(a==0 && b>0){
                        b = b-1;
                }else{
                        c = c-1;
                        ans = ans-1;
                }   
        }   

        printf("%d\n",ans);
        return 0;
}
