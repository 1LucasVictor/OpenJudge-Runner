#include<stdio.h>
int min(int a,int b){if(a>b) return b;return a;}
int main(){
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    printf("%d\n",min(b,n*a));
    return 0;
}