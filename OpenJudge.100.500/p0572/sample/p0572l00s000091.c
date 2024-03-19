#include <stdio.h>

int main(){
    int l,r;
    scanf("%d%d",&l,&r);
    int answer=2019;
    r=r-l<2019?r:l+2019;
    for(int i=l;i<=r;i++){
        for(int j=i+1;j<=r;j++){
            int a=i*j%2019;
            answer=a<answer?a:answer;
            if(answer==0) {
                i=r+1;
                j=r+1;
            }
        }
    }
    printf("%d",answer);
}