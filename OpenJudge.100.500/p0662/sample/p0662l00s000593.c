#include <stdio.h>
int min(int n,int m){
    if(n<m) return n;
    else return m;
}
int max(int n,int m){
    if(n<m) return m;
    else return n;
}
int main(void){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%d\n",max(0,min(b,d)-max(a,c)));
}