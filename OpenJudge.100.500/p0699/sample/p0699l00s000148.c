#include<stdio.h>
int main(){
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    x = a+b+c;
    if(x==17){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}