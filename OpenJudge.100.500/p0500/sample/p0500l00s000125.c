#include<stdio.h>

int main(void){

    int N,M,s[4],c[4],i,j,ans[11] = {0},max = 0,tmp1,tmp2;

    scanf("%d %d",&N,&M);
    for(i = 0;i < M;i++){
        scanf("%d %d",&s[i],&c[i]);
    }

    for(i = 0;i < M;i++){
        for(j = i+1;j < M;j++){
            if(s[i] > s[j]){
                tmp1 = s[i];
                tmp2 = c[i];
                s[i] = s[j];
                c[i] = c[j];
                s[j] = tmp1;
                c[j] = tmp2;
            }
        }
    }

    for(i = 0;i < M;i++){
        if(max < s[i]) max = s[i];
        ans[s[i]] = c[i];
    }

    //printf("max:%d\n",max);
    //for(i = 1;i < max;i++) printf("%d\n",ans[i]);
    for(i = 0;i < M;i++){
        if(ans[s[i]] != c[i]){
            printf("-1\n");
            return 0;
        }
        //printf("done%d\n",i);
    }

    if(max != N || ans[1] == 0){
        printf("-1\n");
    }else{
        for(i = 1;i <= max;i++) printf("%d",ans[i]);
        printf("\n");
    }
    return 0;
}
