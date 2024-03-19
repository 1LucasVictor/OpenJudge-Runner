#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void){
    bool flag=false;
    int n,a[200000]={0},s;
    scanf("%d",&n);
    for(int b=0;b<n;b++){
        scanf("%d",&s);
        a[b]=s;
    }
    for(int c=0;c<n-1;c++){
        for(int d=c+1;d<=n;d++){
            if(a[c]==a[d]){
                flag=true;
            }
        }
    }
    if(flag){
        printf("NO");
    }else printf("YES");
}