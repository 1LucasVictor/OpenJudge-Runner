#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void){
    bool flag=false;
    unsigned int n,a[210000]={0},s;
    scanf("%d",&n);
    for(int b=0;b<n;b++){
        scanf("%d",&s);
        a[b]=s;
    }
    for(int c=0;c<n-1;c++){
        if(a[c]==a[c+1]){
            flag=true;
        }
    }
    if(flag){
        printf("NO");
    }else printf("YES");
}