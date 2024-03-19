#include<stdio.h>
#include<string.h>
int main(){
    int i,m,h,x,sum,len,cot;
    char S[201];
    while(1){
        sum = 0;
        cot = 0;
        scanf("%s",S);
        if(strcmp(S,"-") == 0) break;
        scanf("%d",&m);
        for(i=0;i<m;i++){
            scanf("%d",&h);
            sum += h;
        }
        len = strlen(S);
        x = sum % len;
        for(i=x;cot<len;i++){
            cot++;
            printf("%c",S[i]);
            if(cot == len) break;
            if(len-1 == i) i = -1;
        }
        printf("\n");
    }
    return 0;
}
