#include<stdio.h>
int main(){
    int a,b,x,n;
    scanf("%d %d %d",&n,&a,&b);
    x=a*n;
    if(x>b){
        x=b;
    }
    printf("%d\n",x);
    return 0;
}
