#include<stdio.h>

int main(void){

    int N,M,s[4],c[4],i,j,ans[11] = {0},max = 0,num_start = 0,len=0;

    scanf("%d %d",&N,&M);
    for(i = 0;i < M;i++){
        scanf("%d %d",&s[i],&c[i]);
    }

    for(i = 0;i < M;i++){
        if(max < s[i]) max = s[i];
        ans[s[i]] = c[i];
    }

    if(ans[1] == 0){
        printf("-1\n");
    }else{
        for(i = 1;i <= max;i++) printf("%d",ans[i]);
        printf("\n");
    }
    return 0;
}