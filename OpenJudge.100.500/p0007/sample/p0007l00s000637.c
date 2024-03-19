#include <stdio.h>
int main(){
        int a,b,c,d,n,ans;
        while(scanf("%d", &n) != EOF){
        for(a=1;a<=9;a++){
                for(b=1;b<=9;b++){
                        for(c=1;c<=9;c++){
                                for(d=1;d<=9;d++){
                                        if(a + b + c + d == n){
                                                ans++;
                                        }
                                }
                        }
                }
        }
        printf("%d\n", ans);
        }
return 0;
}