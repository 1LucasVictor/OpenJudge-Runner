#include<stdio.h>

int main(){
    int n, m, i, j, f;
    scanf("%d %d", &n, &m);
    int s[m], c[m];
    for(i=0;i<m;i++){
        scanf("%d %d",&s[i], &c[i]);
    }
    for(i=0;i<m;i++){
        for(j=i+1;j<m;j++){
            if(s[i]!=0&&s[j]!=0&&s[i]==s[j]&&c[i]!=c[j]){ printf("-1"); return 0; }
        }
    }
    i=1;
    while(i<=n){
        f=0;
        //printf("---%d---\n",i);
        for(j=0;j<m;j++){
            if(s[j]==1&&c[j]==0){ printf("-1"); return 0; }
            else if(i==s[j]){ printf("%d",c[j]); i++; f=1; break; }
        }
        if(f==0){ printf("0"); i++; f=0; }
    }
}