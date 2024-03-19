#include<stdio.h>

int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    int s[m],c[m];
    for(int i = 0;i < m;i++)scanf("%d %d",&s[i],&c[i]);
    for(int i = 0;i < m;i++)for(int j = 0;j < m;j++)if(s[i] == s[j] && c[i] != c[j]){
        printf("%d",-1);
        return 0;
    }
    for(int i = 0;i < m;i++)if(n != 1 && s[i] == 1 && !c[i]){
        printf("%d",-1);
        return 0;
    }
    char ans[n + 1];
    for(int i = 0;i < n + 1;i++)ans[i] = '0';
    for(int i = 0;i < m;i++)ans[s[i] - 1] = c[i] + '0';
    ans[n] = '\0';
    printf("%s",ans);
    return 0;
}