#include<stdio.h>

int i,j,a,b,c,ans=0;

int main(){
    while(scanf("%d %d",&a,&b)!=EOF){
        c=a+b;
        while(c!=0)c=c/10,ans++;
        printf("%d\n",ans);ans=0;
    }
    
    return 0;
}
