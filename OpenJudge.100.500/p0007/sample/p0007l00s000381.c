#include <stdio.h>
int kumi(int n){
    int a,b,c,d,cnt=0;
    for(a=0;a<=9;a++){
        for(b=0;b<=9;b++){
            for(c=0;c<=9;c++){
                for(d=0;d<=9;d++){
                    if(a+b+c+d==n){
                        cnt++;
                    }
                }
            }
        }
    }
    return cnt;
    
}
int main(void){
    int n,result;
    while(scanf("%d",&n)!=EOF){
        result=kumi(n);
        printf("%d\n",result);
    }
    return 0;
}