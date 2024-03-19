#include <stdio.h>
#include <stdlib.h>

int main(){
    int N,M;
    scanf("%d",&N);
    scanf("%d",&M);
    int num[N];
    for(int j=0; j<N; j++){
        num[j] = 10;
    }
    int s,c;
    for(int i=0;i<M;i++){
        scanf("%d",&s);
        scanf("%d",&c);
        if(s>N){
            printf("-1");
            return 0;    
        }
        if(num[s-1]!=10 && num[s-1]!=c){
            printf("-1");
            return 0;
        }else{
            num[s-1]=c;
        }
    }

    if(num[0]==10){num[0]=1;}
    for(int p=1;p<N;++p){
        if(num[p]==10){num[p]=0;}
        
    }
    if(num[0]==0){printf("-1");
        return 0;
    }
    for(int q=0;q<N;++q){
        printf("%d",num[q]);
    }
    return 0;
}
