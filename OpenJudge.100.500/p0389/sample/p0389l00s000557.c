#include <stdio.h>
#include <string.h>
int main(void)
{
    int i,j,k,m,x;
    char n[200],n1[200];
    while(1){
        scanf("%s",n);
        if(n[0]=='-')break;
        x=strlen(n);//文字数を数える
        scanf("%d",&k);//回数を入力
        for(m=0;m<k;m++){
            scanf("%d",&i);
            strncpy(n1,n,i);
            n1[i] = '\0';//n1の作成完了
            for(j=0;j<x-i;j++)n[j]=n[i+j];
            n[j] = '\0';//nの作成完了
            strcat(n,n1);//n+n1をする
        }
        printf("%s\n",n);
    }
    return 0;
}