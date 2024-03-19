#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        int x=i;
        if(x%3==0){
            printf(" %d",x);
        }else{
            while(x){
                if(x%10==3){
                    printf(" %d",i);
                    break;
                }
                x/=10;
            }
        }
    }
    printf("\n");
}
