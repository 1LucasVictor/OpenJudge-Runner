#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int N,M;
    int s[5];
    char c[5][2];
    char num[5];
    scanf("%d %d",&N,&M);
    for(int i = 0 ; i < M ; i++){
        scanf("%d %s",&s[i],&c[i]);
    }
    int begin,end;
    switch(N){
        case 1:
            begin = 1;
            end = 9;
            break;
        case 2:
            begin = 10;
            end = 99;
            break;
        case 3:
            begin = 100;
            end = 999;
            break;
    }
    int flg,ans=-1;
    for(int i = begin ; i <= end ; i++){
        sprintf(num,"%d",i);
        flg = 1;
        for(int j = 0 ; j < M ; j++){
            if(num[s[j] - 1] != c[j][0]){
                flg = 0;
                break;
            }
        }
        if(flg == 1){
            ans = i;
            break;
        }
    }
    printf("%d",ans);

    return 0;
}